#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QList>
#include <QString>
#include <QMap>
#include <QDateTime>
#include <QFileDialog>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

struct BirdSpecies {
    QString hungarianName;
    QString scientificName;
    QString huringCode;
};

struct BirdData {
    QString ringCode;
    QString species;
    QDateTime captureDateTime;
    QString captureLocation;
    QString captureType;
    QString age;
    QString sex;
    QString status;
    QString manipulation;
};


class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;

    QList<BirdSpecies> birdSpeciesList;
    QList<BirdData> birdDataList;
    QMap<QString, int> speciesCount;

    void loadSpeciesFromFile();
    void updateComboBox(const QString &searchText);

    void updateSpeciesComboBox();
    void addBirdDataToTable(const BirdData &birdData);

    void importDataFromFile(const QString &filePath);
    void updateTableFromList();
    void exportDataToFile(const QString &filePath);

    void addSpeciesToComboBox(const QList<BirdSpecies> &speciesList);

private slots:
    void onSearchTextChanged(const QString &searchText);

    void on_Save_clicked();
    void on_Delete_clicked();
    void on_actionImport_triggered();
    void on_actionExport_triggered();
    void on_actionReset_triggered();

protected:
    void closeEvent(QCloseEvent *event) override;
};

#endif // MAINWINDOW_H
