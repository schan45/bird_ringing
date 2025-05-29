/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionImport;
    QAction *actionExport;
    QAction *actionReset;
    QWidget *centralwidget;
    QLabel *label;
    QLineEdit *lineEditRingCode;
    QDateTimeEdit *dateTimeEditCaptureDate;
    QComboBox *comboBoxSpecies;
    QLineEdit *lineEditCaptureLocation;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QComboBox *comboBoxAge;
    QLabel *label_7;
    QLabel *label_8;
    QComboBox *comboBoxSex;
    QLabel *label_9;
    QComboBox *comboBoxCaptureType;
    QLabel *label_10;
    QComboBox *comboBoxStatus;
    QLabel *label_11;
    QComboBox *comboBoxManipulation;
    QPushButton *Save;
    QLineEdit *searchLineEdit;
    QTableWidget *birdDataTable;
    QPushButton *Delete;
    QMenuBar *menubar;
    QMenu *menuMenu;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(787, 629);
        actionImport = new QAction(MainWindow);
        actionImport->setObjectName("actionImport");
        QFont font;
        font.setFamilies({QString::fromUtf8("Gill Sans MT")});
        font.setPointSize(10);
        actionImport->setFont(font);
        actionExport = new QAction(MainWindow);
        actionExport->setObjectName("actionExport");
        actionReset = new QAction(MainWindow);
        actionReset->setObjectName("actionReset");
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(230, 10, 371, 61));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Gill Sans MT")});
        font1.setPointSize(20);
        label->setFont(font1);
        lineEditRingCode = new QLineEdit(centralwidget);
        lineEditRingCode->setObjectName("lineEditRingCode");
        lineEditRingCode->setGeometry(QRect(30, 120, 141, 24));
        lineEditRingCode->setFont(font);
        dateTimeEditCaptureDate = new QDateTimeEdit(centralwidget);
        dateTimeEditCaptureDate->setObjectName("dateTimeEditCaptureDate");
        dateTimeEditCaptureDate->setGeometry(QRect(30, 210, 141, 25));
        dateTimeEditCaptureDate->setFont(font);
        dateTimeEditCaptureDate->setDateTime(QDateTime(QDate(2024, 1, 1), QTime(0, 0, 0)));
        dateTimeEditCaptureDate->setCalendarPopup(true);
        comboBoxSpecies = new QComboBox(centralwidget);
        comboBoxSpecies->addItem(QString());
        comboBoxSpecies->setObjectName("comboBoxSpecies");
        comboBoxSpecies->setGeometry(QRect(340, 120, 421, 24));
        comboBoxSpecies->setFont(font);
        lineEditCaptureLocation = new QLineEdit(centralwidget);
        lineEditCaptureLocation->setObjectName("lineEditCaptureLocation");
        lineEditCaptureLocation->setGeometry(QRect(200, 210, 251, 24));
        lineEditCaptureLocation->setFont(font);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(30, 90, 101, 21));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Gill Sans MT")});
        font2.setPointSize(11);
        label_2->setFont(font2);
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(200, 90, 101, 21));
        label_3->setFont(font2);
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(30, 180, 101, 21));
        label_4->setFont(font2);
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(200, 180, 101, 21));
        label_5->setFont(font2);
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(620, 160, 131, 121));
        comboBoxAge = new QComboBox(centralwidget);
        comboBoxAge->addItem(QString());
        comboBoxAge->addItem(QString());
        comboBoxAge->addItem(QString());
        comboBoxAge->addItem(QString());
        comboBoxAge->addItem(QString());
        comboBoxAge->addItem(QString());
        comboBoxAge->addItem(QString());
        comboBoxAge->addItem(QString());
        comboBoxAge->addItem(QString());
        comboBoxAge->setObjectName("comboBoxAge");
        comboBoxAge->setGeometry(QRect(30, 300, 81, 24));
        comboBoxAge->setFont(font);
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(30, 270, 101, 21));
        label_7->setFont(font2);
        label_8 = new QLabel(centralwidget);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(140, 270, 101, 21));
        label_8->setFont(font2);
        comboBoxSex = new QComboBox(centralwidget);
        comboBoxSex->addItem(QString());
        comboBoxSex->addItem(QString());
        comboBoxSex->addItem(QString());
        comboBoxSex->setObjectName("comboBoxSex");
        comboBoxSex->setGeometry(QRect(140, 300, 81, 24));
        comboBoxSex->setFont(font);
        label_9 = new QLabel(centralwidget);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(480, 180, 101, 21));
        label_9->setFont(font2);
        comboBoxCaptureType = new QComboBox(centralwidget);
        comboBoxCaptureType->addItem(QString());
        comboBoxCaptureType->addItem(QString());
        comboBoxCaptureType->addItem(QString());
        comboBoxCaptureType->addItem(QString());
        comboBoxCaptureType->addItem(QString());
        comboBoxCaptureType->addItem(QString());
        comboBoxCaptureType->setObjectName("comboBoxCaptureType");
        comboBoxCaptureType->setGeometry(QRect(480, 210, 121, 24));
        comboBoxCaptureType->setFont(font);
        label_10 = new QLabel(centralwidget);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(250, 270, 101, 21));
        label_10->setFont(font2);
        comboBoxStatus = new QComboBox(centralwidget);
        comboBoxStatus->addItem(QString());
        comboBoxStatus->addItem(QString());
        comboBoxStatus->addItem(QString());
        comboBoxStatus->addItem(QString());
        comboBoxStatus->addItem(QString());
        comboBoxStatus->addItem(QString());
        comboBoxStatus->addItem(QString());
        comboBoxStatus->addItem(QString());
        comboBoxStatus->addItem(QString());
        comboBoxStatus->addItem(QString());
        comboBoxStatus->addItem(QString());
        comboBoxStatus->setObjectName("comboBoxStatus");
        comboBoxStatus->setGeometry(QRect(250, 300, 81, 24));
        comboBoxStatus->setFont(font);
        label_11 = new QLabel(centralwidget);
        label_11->setObjectName("label_11");
        label_11->setGeometry(QRect(360, 270, 101, 21));
        label_11->setFont(font2);
        comboBoxManipulation = new QComboBox(centralwidget);
        comboBoxManipulation->addItem(QString());
        comboBoxManipulation->addItem(QString());
        comboBoxManipulation->addItem(QString());
        comboBoxManipulation->addItem(QString());
        comboBoxManipulation->addItem(QString());
        comboBoxManipulation->addItem(QString());
        comboBoxManipulation->addItem(QString());
        comboBoxManipulation->addItem(QString());
        comboBoxManipulation->addItem(QString());
        comboBoxManipulation->addItem(QString());
        comboBoxManipulation->addItem(QString());
        comboBoxManipulation->setObjectName("comboBoxManipulation");
        comboBoxManipulation->setGeometry(QRect(360, 300, 91, 24));
        comboBoxManipulation->setFont(font);
        Save = new QPushButton(centralwidget);
        Save->setObjectName("Save");
        Save->setGeometry(QRect(480, 290, 171, 41));
        Save->setFont(font);
        searchLineEdit = new QLineEdit(centralwidget);
        searchLineEdit->setObjectName("searchLineEdit");
        searchLineEdit->setGeometry(QRect(200, 120, 131, 24));
        birdDataTable = new QTableWidget(centralwidget);
        if (birdDataTable->columnCount() < 9)
            birdDataTable->setColumnCount(9);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        birdDataTable->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        birdDataTable->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        birdDataTable->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        birdDataTable->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        birdDataTable->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        birdDataTable->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        birdDataTable->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        birdDataTable->setHorizontalHeaderItem(7, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        birdDataTable->setHorizontalHeaderItem(8, __qtablewidgetitem8);
        birdDataTable->setObjectName("birdDataTable");
        birdDataTable->setGeometry(QRect(30, 360, 731, 211));
        birdDataTable->setFont(font);
        Delete = new QPushButton(centralwidget);
        Delete->setObjectName("Delete");
        Delete->setGeometry(QRect(670, 300, 91, 24));
        Delete->setFont(font);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 787, 21));
        menuMenu = new QMenu(menubar);
        menuMenu->setObjectName("menuMenu");
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuMenu->menuAction());
        menuMenu->addAction(actionImport);
        menuMenu->addAction(actionExport);
        menuMenu->addAction(actionReset);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionImport->setText(QCoreApplication::translate("MainWindow", "Adatok bet\303\266lt\303\251se f\303\241jlb\303\263l...", nullptr));
#if QT_CONFIG(tooltip)
        actionImport->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Adatok bet\303\266lt\303\251se f\303\241jlb\303\263l</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        actionExport->setText(QCoreApplication::translate("MainWindow", "Adatok kiment\303\251se...", nullptr));
        actionReset->setText(QCoreApplication::translate("MainWindow", "Adatok vissza\303\241ll\303\255t\303\241sa...", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Seg\303\251dprogram mad\303\241rgy\305\261r\305\261z\303\251shez", nullptr));
        comboBoxSpecies->setItemText(0, QString());

        label_2->setText(QCoreApplication::translate("MainWindow", "Gy\305\261r\305\261 k\303\263dja", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Mad\303\241r faja", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Befog\303\241s ideje", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Befog\303\241s helye", nullptr));
        label_6->setText(QString());
        comboBoxAge->setItemText(0, QString());
        comboBoxAge->setItemText(1, QCoreApplication::translate("MainWindow", "P", nullptr));
        comboBoxAge->setItemText(2, QCoreApplication::translate("MainWindow", "F", nullptr));
        comboBoxAge->setItemText(3, QCoreApplication::translate("MainWindow", "1y", nullptr));
        comboBoxAge->setItemText(4, QCoreApplication::translate("MainWindow", "1+", nullptr));
        comboBoxAge->setItemText(5, QCoreApplication::translate("MainWindow", "2y", nullptr));
        comboBoxAge->setItemText(6, QCoreApplication::translate("MainWindow", "2+", nullptr));
        comboBoxAge->setItemText(7, QCoreApplication::translate("MainWindow", "3y", nullptr));
        comboBoxAge->setItemText(8, QCoreApplication::translate("MainWindow", "3+", nullptr));

        label_7->setText(QCoreApplication::translate("MainWindow", "Kor", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "Ivar", nullptr));
        comboBoxSex->setItemText(0, QString());
        comboBoxSex->setItemText(1, QCoreApplication::translate("MainWindow", "H", nullptr));
        comboBoxSex->setItemText(2, QCoreApplication::translate("MainWindow", "T", nullptr));

        label_9->setText(QCoreApplication::translate("MainWindow", "Befog\303\241s t\303\255pusa", nullptr));
        comboBoxCaptureType->setItemText(0, QString());
        comboBoxCaptureType->setItemText(1, QCoreApplication::translate("MainWindow", "F", nullptr));
        comboBoxCaptureType->setItemText(2, QCoreApplication::translate("MainWindow", "R", nullptr));
        comboBoxCaptureType->setItemText(3, QCoreApplication::translate("MainWindow", "S", nullptr));
        comboBoxCaptureType->setItemText(4, QCoreApplication::translate("MainWindow", "H", nullptr));
        comboBoxCaptureType->setItemText(5, QCoreApplication::translate("MainWindow", "E", nullptr));

        label_10->setText(QCoreApplication::translate("MainWindow", "St\303\241tusz", nullptr));
        comboBoxStatus->setItemText(0, QString());
        comboBoxStatus->setItemText(1, QCoreApplication::translate("MainWindow", "-", nullptr));
        comboBoxStatus->setItemText(2, QCoreApplication::translate("MainWindow", "N", nullptr));
        comboBoxStatus->setItemText(3, QCoreApplication::translate("MainWindow", "K", nullptr));
        comboBoxStatus->setItemText(4, QCoreApplication::translate("MainWindow", "L", nullptr));
        comboBoxStatus->setItemText(5, QCoreApplication::translate("MainWindow", "M", nullptr));
        comboBoxStatus->setItemText(6, QCoreApplication::translate("MainWindow", "P", nullptr));
        comboBoxStatus->setItemText(7, QCoreApplication::translate("MainWindow", "R", nullptr));
        comboBoxStatus->setItemText(8, QCoreApplication::translate("MainWindow", "T", nullptr));
        comboBoxStatus->setItemText(9, QCoreApplication::translate("MainWindow", "W", nullptr));
        comboBoxStatus->setItemText(10, QCoreApplication::translate("MainWindow", "U", nullptr));

        label_11->setText(QCoreApplication::translate("MainWindow", "Manipul\303\241ci\303\263", nullptr));
        comboBoxManipulation->setItemText(0, QString());
        comboBoxManipulation->setItemText(1, QCoreApplication::translate("MainWindow", "N", nullptr));
        comboBoxManipulation->setItemText(2, QCoreApplication::translate("MainWindow", "H", nullptr));
        comboBoxManipulation->setItemText(3, QCoreApplication::translate("MainWindow", "K", nullptr));
        comboBoxManipulation->setItemText(4, QCoreApplication::translate("MainWindow", "M", nullptr));
        comboBoxManipulation->setItemText(5, QCoreApplication::translate("MainWindow", "P", nullptr));
        comboBoxManipulation->setItemText(6, QCoreApplication::translate("MainWindow", "R", nullptr));
        comboBoxManipulation->setItemText(7, QCoreApplication::translate("MainWindow", "C", nullptr));
        comboBoxManipulation->setItemText(8, QCoreApplication::translate("MainWindow", "F", nullptr));
        comboBoxManipulation->setItemText(9, QCoreApplication::translate("MainWindow", "T", nullptr));
        comboBoxManipulation->setItemText(10, QCoreApplication::translate("MainWindow", "U", nullptr));

        Save->setText(QCoreApplication::translate("MainWindow", "Mad\303\241r adatainak felv\303\251tele", nullptr));
        QTableWidgetItem *___qtablewidgetitem = birdDataTable->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("MainWindow", "Gy\305\261r\305\261 k\303\263d", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = birdDataTable->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("MainWindow", "Faj", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = birdDataTable->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("MainWindow", "Befog\303\241s ideje", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = birdDataTable->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("MainWindow", "Befog\303\241s helye", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = birdDataTable->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("MainWindow", "Befog\303\241s t\303\255pusa", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = birdDataTable->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("MainWindow", "Kor", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = birdDataTable->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("MainWindow", "Ivar", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = birdDataTable->horizontalHeaderItem(7);
        ___qtablewidgetitem7->setText(QCoreApplication::translate("MainWindow", "St\303\241tusz", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = birdDataTable->horizontalHeaderItem(8);
        ___qtablewidgetitem8->setText(QCoreApplication::translate("MainWindow", "Manipul\303\241ci\303\263", nullptr));
        Delete->setText(QCoreApplication::translate("MainWindow", "Adatsor t\303\266rl\303\251se", nullptr));
        menuMenu->setTitle(QCoreApplication::translate("MainWindow", "Men\303\274", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
