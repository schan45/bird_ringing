#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPixmap>
#include <QFile>
#include <QTextStream>
#include <QStringList>
#include <QMessageBox>
#include <QCloseEvent>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //Kép
    QPixmap pix("madarlogo.png");
    QPixmap scaledPix = pix.scaled(ui->label_6->size(), Qt::KeepAspectRatio, Qt::SmoothTransformation);
    ui->label_6->setPixmap(scaledPix);

    // QRegularExpressionValidator létrehozása a ';' karakter tiltására
    QRegularExpression regex("[^;]*");
    QRegularExpressionValidator *validator = new QRegularExpressionValidator(regex, this);
    ui->lineEditRingCode->setValidator(validator);
    ui->lineEditCaptureLocation->setValidator(validator);

    loadSpeciesFromFile();
    //A konstruktor egy olyan speciális függvény, amely akkor fut le, amikor a MainWindow objektum létrejön

    connect(ui->searchLineEdit, &QLineEdit::textChanged, this, &MainWindow::onSearchTextChanged);
    //Amikor a felhasználó szöveget ír vagy módosít a searchLineEdit mezőben, a textChanged jelzés aktiválódik, és az onSearchTextChanged függvény meghívódik
}

MainWindow::~MainWindow()
{
    delete ui;
}

// Madárfajok betöltése fájlból
void MainWindow::loadSpeciesFromFile()
{
    QFile file("madarlista2.txt");
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        qDebug() << "Nem sikerült megnyitni a fajlistát.";
        return;
    }

    QTextStream in(&file);

    while (!in.atEnd()) {
        QString line = in.readLine().trimmed();
        QStringList lineParts = line.split(',');
        if (lineParts.size() < 3) continue;

        BirdSpecies species;
        species.hungarianName = lineParts[0].trimmed();
        species.scientificName = lineParts[1].trimmed();
        species.huringCode = lineParts[2].trimmed();

        birdSpeciesList.append(species);
    }

    file.close();
    updateComboBox("");
}

void MainWindow::updateComboBox(const QString &searchText)
{
    ui->comboBoxSpecies->clear();

    QList<BirdSpecies> filteredSpeciesWithCount;
    QList<BirdSpecies> filteredSpeciesWithoutCount;

    // Szűrés a keresési szöveg alapján, vagy ha nincs keresés, minden faj megjelenik
    for (const BirdSpecies &species : birdSpeciesList) {
        bool matchesSearch = searchText.isEmpty() || species.hungarianName.contains(searchText, Qt::CaseInsensitive) ||
                             species.scientificName.contains(searchText, Qt::CaseInsensitive) ||
                             species.huringCode.contains(searchText, Qt::CaseInsensitive);

        if (matchesSearch) {
            int count = speciesCount.value(species.hungarianName, 0);

            if (count > 0) {
                filteredSpeciesWithCount.append(species);
            } else {
                filteredSpeciesWithoutCount.append(species);
            }
        }
    }

    // Rendezés gyakoriság alapján (csak a nem nulla gyakoriságú fajoknál)
    std::sort(filteredSpeciesWithCount.begin(), filteredSpeciesWithCount.end(), [this](const BirdSpecies &a, const BirdSpecies &b) {
        return speciesCount[a.hungarianName] > speciesCount[b.hungarianName];
    });

    // Betűrendbe rendezés a nulla gyakoriságú fajoknál
    std::sort(filteredSpeciesWithoutCount.begin(), filteredSpeciesWithoutCount.end(), [](const BirdSpecies &a, const BirdSpecies &b) {
        return a.hungarianName < b.hungarianName;
    });

    // Hozzáadjuk a ComboBox-hoz a gyakoriság szerint rendezett fajokat
    addSpeciesToComboBox(filteredSpeciesWithCount);

    // Hozzáadjuk a ComboBox-hoz a betűrendben rendezett, nulla gyakoriságú fajokat
    addSpeciesToComboBox(filteredSpeciesWithoutCount);
}

// Segédfüggvény a fajok hozzáadására a ComboBox-hoz
void MainWindow::addSpeciesToComboBox(const QList<BirdSpecies> &speciesList)
{
    for (const BirdSpecies &species : speciesList) {
        ui->comboBoxSpecies->addItem(species.hungarianName + " (" + species.scientificName + ") - " + species.huringCode);
    }
}


void MainWindow::onSearchTextChanged(const QString &searchText)
{
    updateComboBox(searchText);
}

//Új madár hozzáadása gomb működése
void MainWindow::on_Save_clicked()
{
    QString ringCode = ui->lineEditRingCode->text();
    QString species = ui->comboBoxSpecies->currentText().split(" (").first();  // Csak a magyar név
    QDateTime captureDateTime = ui->dateTimeEditCaptureDate->dateTime();
    QString captureLocation = ui->lineEditCaptureLocation->text();
    QString captureType = ui->comboBoxCaptureType->currentText();
    QString age = ui->comboBoxAge->currentText();
    QString sex = ui->comboBoxSex->currentText();
    QString status = ui->comboBoxStatus->currentText();
    QString manipulation = ui->comboBoxManipulation->currentText();

    BirdData birdData = {ringCode, species, captureDateTime, captureLocation, captureType, age, sex, status, manipulation};
    birdDataList.append(birdData);

    speciesCount[species] += 1;

    updateSpeciesComboBox();

    addBirdDataToTable(birdData);
}


//Adatsor felvétele a táblázatba
void MainWindow::addBirdDataToTable(const BirdData &birdData)
{
    int row = ui->birdDataTable->rowCount();
    ui->birdDataTable->insertRow(row);

    ui->birdDataTable->setItem(row, 0, new QTableWidgetItem(birdData.ringCode));
    ui->birdDataTable->setItem(row, 1, new QTableWidgetItem(birdData.species));
    ui->birdDataTable->setItem(row, 2, new QTableWidgetItem(birdData.captureDateTime.toString("yyyy.MM.dd hh:mm")));
    ui->birdDataTable->setItem(row, 3, new QTableWidgetItem(birdData.captureLocation));
    ui->birdDataTable->setItem(row, 4, new QTableWidgetItem(birdData.captureType));
    ui->birdDataTable->setItem(row, 5, new QTableWidgetItem(birdData.age));
    ui->birdDataTable->setItem(row, 6, new QTableWidgetItem(birdData.sex));
    ui->birdDataTable->setItem(row, 7, new QTableWidgetItem(birdData.status));
    ui->birdDataTable->setItem(row, 8, new QTableWidgetItem(birdData.manipulation));
}

//Sor eltávolítása a táblázatból
void MainWindow::on_Delete_clicked()
{
    int row = ui->birdDataTable->currentRow();
    if (row == -1) {
        qDebug() << "Nincs kiválasztott sor.";
            return;
    }

    QMessageBox::StandardButton reply;
    reply = QMessageBox::question(this, "Sor törlése", "Biztosan törlöd a kijelölt sort?",
                                  QMessageBox::Yes|QMessageBox::No);

    if (reply == QMessageBox::Yes) {
        birdDataList.removeAt(row);

        ui->birdDataTable->removeRow(row);

        qDebug() << "Sor törölve.";
    } else {
        qDebug() << "A sor törlése visszavonva.";
    }
}

void MainWindow::importDataFromFile(const QString &filePath)
{
    QFile file(filePath);
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        qDebug() << "Nem sikerült megnyitni a fájlt.";
        return;
    }

    QTextStream in(&file);

    while (!in.atEnd()) {
        QString line = in.readLine();
        QStringList fields = line.split(';');
        if (fields.size() < 9) continue;

        BirdData birdData;
        birdData.ringCode = fields[0].trimmed();
        birdData.species = fields[1].trimmed();
        birdData.captureDateTime = QDateTime::fromString(fields[2].trimmed(), "yyyy.MM.dd hh:mm");
        birdData.captureLocation = fields[3].trimmed();
        birdData.captureType = fields[4].trimmed();
        birdData.age = fields[5].trimmed();
        birdData.sex = fields[6].trimmed();
        birdData.status = fields[7].trimmed();
        birdData.manipulation = fields[8].trimmed();

        birdDataList.append(birdData);
        speciesCount[birdData.species] += 1;
    }

    file.close();

    updateSpeciesComboBox();

    updateTableFromList();
}

void MainWindow::updateSpeciesComboBox()
{
    ui->comboBoxSpecies->clear();

    QList<QString> sortedSpecies = speciesCount.keys();
    std::sort(sortedSpecies.begin(), sortedSpecies.end(), [this](const QString &a, const QString &b) {
        return speciesCount[a] > speciesCount[b];
    });

    for (const QString &species : sortedSpecies) {
        for (const BirdSpecies &bird : birdSpeciesList) {
            if (bird.hungarianName == species) {
                ui->comboBoxSpecies->addItem(bird.hungarianName + " (" + bird.scientificName + ") - " + bird.huringCode);
                break;
            }
        }
    }
}

void MainWindow::updateTableFromList()
{
    ui->birdDataTable->setRowCount(0);

    for (const BirdData &birdData : birdDataList) {
        addBirdDataToTable(birdData);
    }
}


void MainWindow::exportDataToFile(const QString &filePath)
{
    QFile file(filePath);
    if (!file.open(QIODevice::WriteOnly | QIODevice::Text)) {
        qDebug() << "Nem sikerült megnyitni a fájlt írásra.";
        return;
    }

    QTextStream out(&file);

    const char sep = ';';

    for (const BirdData &birdData : birdDataList) {
        out << birdData.ringCode << sep
            << birdData.species << sep
            << birdData.captureDateTime.toString("yyyy.MM.dd hh:mm") << sep
            << birdData.captureLocation << sep
            << birdData.captureType << sep
            << birdData.age << sep
            << birdData.sex << sep
            << birdData.status << sep
            << birdData.manipulation << "\n";
    }

    file.close();
}


void MainWindow::on_actionImport_triggered()
{
    QString filePath = QFileDialog::getOpenFileName(this, "Válassz egy fájlt", "", "Szövegfájlok (*.txt)");
    if (!filePath.isEmpty()) {
        importDataFromFile(filePath);
    }
}


void MainWindow::on_actionExport_triggered()
{
    QString filePath = QFileDialog::getSaveFileName(this, "Mentés másként", "", "Szövegfájlok (*.txt)");
    if (!filePath.isEmpty()) {
        exportDataToFile(filePath);
    }
}


void MainWindow::on_actionReset_triggered()
{
    QMessageBox::StandardButton reply;
    reply = QMessageBox::question(this, "Adatok törlése", "Biztos vagy benne, hogy törlöd az összes adatot?",
                                  QMessageBox::Yes|QMessageBox::No);

    if (reply == QMessageBox::Yes) {
        birdDataList.clear();

        ui->birdDataTable->clearContents();
        ui->birdDataTable->setRowCount(0);

        qDebug() << "Az összes adat törölve lett.";
    } else {
        qDebug() << "Az adatok törlése visszavonva.";
    }
}

void MainWindow::closeEvent(QCloseEvent *event)
{
    if (!birdDataList.isEmpty()) {
        QMessageBox::StandardButton reply;
        reply = QMessageBox::question(this, "Program bezárása",
                                      "Biztosan be szeretnéd zárni a programot?\n Nem mentetted az adatokat!",
                                      QMessageBox::Save | QMessageBox::Discard | QMessageBox::Cancel);

        if (reply == QMessageBox::Save) {
            QString filePath = QFileDialog::getSaveFileName(this, "Mentés másként", "", "Szövegfájlok (*.txt)");
            if (!filePath.isEmpty()) {
                exportDataToFile(filePath);
            }
            event->accept();
        }
        else if (reply == QMessageBox::Discard) {
            event->accept();
        }
        else if (reply == QMessageBox::Cancel) {
            event->ignore();
        }
    }
    else {
        event->accept();
    }
}
