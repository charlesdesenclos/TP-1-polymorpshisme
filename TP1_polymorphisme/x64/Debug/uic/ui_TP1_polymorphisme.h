/********************************************************************************
** Form generated from reading UI file 'TP1_polymorphisme.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TP1_POLYMORPHISME_H
#define UI_TP1_POLYMORPHISME_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TP1_polymorphismeClass
{
public:
    QAction *actionajouter;
    QAction *actionaffichage;
    QAction *actionQuitter;
    QWidget *centralWidget;
    QLabel *label_nom;
    QLabel *labelprenom;
    QLabel *label_adresse;
    QLabel *label_titre;
    QLabel *label_age;
    QLabel *label_telephone;
    QLabel *label_email;
    QRadioButton *radioButton_professeur;
    QRadioButton *radioButton_etudiant;
    QPushButton *pushButton_ajout_personne;
    QLineEdit *lineEdit_nom;
    QLineEdit *lineEdit_prenom;
    QLineEdit *lineEdit_age;
    QLineEdit *lineEdit_telephone;
    QLineEdit *lineEdit_email;
    QLineEdit *lineEdit_adresse;
    QMenuBar *menuBar;
    QMenu *menuFichier;
    QMenu *menuAffichage;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *TP1_polymorphismeClass)
    {
        if (TP1_polymorphismeClass->objectName().isEmpty())
            TP1_polymorphismeClass->setObjectName(QString::fromUtf8("TP1_polymorphismeClass"));
        TP1_polymorphismeClass->resize(645, 462);
        actionajouter = new QAction(TP1_polymorphismeClass);
        actionajouter->setObjectName(QString::fromUtf8("actionajouter"));
        actionaffichage = new QAction(TP1_polymorphismeClass);
        actionaffichage->setObjectName(QString::fromUtf8("actionaffichage"));
        actionQuitter = new QAction(TP1_polymorphismeClass);
        actionQuitter->setObjectName(QString::fromUtf8("actionQuitter"));
        centralWidget = new QWidget(TP1_polymorphismeClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        label_nom = new QLabel(centralWidget);
        label_nom->setObjectName(QString::fromUtf8("label_nom"));
        label_nom->setGeometry(QRect(40, 50, 47, 13));
        labelprenom = new QLabel(centralWidget);
        labelprenom->setObjectName(QString::fromUtf8("labelprenom"));
        labelprenom->setGeometry(QRect(40, 90, 47, 13));
        label_adresse = new QLabel(centralWidget);
        label_adresse->setObjectName(QString::fromUtf8("label_adresse"));
        label_adresse->setGeometry(QRect(40, 140, 47, 13));
        label_titre = new QLabel(centralWidget);
        label_titre->setObjectName(QString::fromUtf8("label_titre"));
        label_titre->setGeometry(QRect(40, 220, 47, 13));
        label_age = new QLabel(centralWidget);
        label_age->setObjectName(QString::fromUtf8("label_age"));
        label_age->setGeometry(QRect(340, 50, 47, 13));
        label_telephone = new QLabel(centralWidget);
        label_telephone->setObjectName(QString::fromUtf8("label_telephone"));
        label_telephone->setGeometry(QRect(340, 90, 61, 16));
        label_email = new QLabel(centralWidget);
        label_email->setObjectName(QString::fromUtf8("label_email"));
        label_email->setGeometry(QRect(340, 122, 47, 21));
        radioButton_professeur = new QRadioButton(centralWidget);
        radioButton_professeur->setObjectName(QString::fromUtf8("radioButton_professeur"));
        radioButton_professeur->setGeometry(QRect(110, 230, 82, 17));
        radioButton_etudiant = new QRadioButton(centralWidget);
        radioButton_etudiant->setObjectName(QString::fromUtf8("radioButton_etudiant"));
        radioButton_etudiant->setGeometry(QRect(210, 230, 82, 17));
        pushButton_ajout_personne = new QPushButton(centralWidget);
        pushButton_ajout_personne->setObjectName(QString::fromUtf8("pushButton_ajout_personne"));
        pushButton_ajout_personne->setGeometry(QRect(240, 10, 141, 23));
        lineEdit_nom = new QLineEdit(centralWidget);
        lineEdit_nom->setObjectName(QString::fromUtf8("lineEdit_nom"));
        lineEdit_nom->setGeometry(QRect(100, 40, 141, 31));
        lineEdit_prenom = new QLineEdit(centralWidget);
        lineEdit_prenom->setObjectName(QString::fromUtf8("lineEdit_prenom"));
        lineEdit_prenom->setGeometry(QRect(100, 80, 141, 31));
        lineEdit_age = new QLineEdit(centralWidget);
        lineEdit_age->setObjectName(QString::fromUtf8("lineEdit_age"));
        lineEdit_age->setGeometry(QRect(410, 40, 141, 31));
        lineEdit_telephone = new QLineEdit(centralWidget);
        lineEdit_telephone->setObjectName(QString::fromUtf8("lineEdit_telephone"));
        lineEdit_telephone->setGeometry(QRect(410, 80, 141, 31));
        lineEdit_email = new QLineEdit(centralWidget);
        lineEdit_email->setObjectName(QString::fromUtf8("lineEdit_email"));
        lineEdit_email->setGeometry(QRect(410, 120, 141, 31));
        lineEdit_adresse = new QLineEdit(centralWidget);
        lineEdit_adresse->setObjectName(QString::fromUtf8("lineEdit_adresse"));
        lineEdit_adresse->setGeometry(QRect(100, 120, 221, 91));
        TP1_polymorphismeClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(TP1_polymorphismeClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 645, 21));
        menuFichier = new QMenu(menuBar);
        menuFichier->setObjectName(QString::fromUtf8("menuFichier"));
        menuAffichage = new QMenu(menuBar);
        menuAffichage->setObjectName(QString::fromUtf8("menuAffichage"));
        TP1_polymorphismeClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(TP1_polymorphismeClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        TP1_polymorphismeClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(TP1_polymorphismeClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        TP1_polymorphismeClass->setStatusBar(statusBar);

        menuBar->addAction(menuFichier->menuAction());
        menuBar->addAction(menuAffichage->menuAction());
        menuFichier->addAction(actionajouter);
        menuFichier->addAction(actionaffichage);
        menuFichier->addAction(actionQuitter);

        retranslateUi(TP1_polymorphismeClass);
        QObject::connect(radioButton_professeur, SIGNAL(toggled(bool)), TP1_polymorphismeClass, SLOT(onRadioButtonProfesseur()));
        QObject::connect(radioButton_etudiant, SIGNAL(toggled(bool)), TP1_polymorphismeClass, SLOT(onRadioButtonEtudiant()));

        QMetaObject::connectSlotsByName(TP1_polymorphismeClass);
    } // setupUi

    void retranslateUi(QMainWindow *TP1_polymorphismeClass)
    {
        TP1_polymorphismeClass->setWindowTitle(QCoreApplication::translate("TP1_polymorphismeClass", "TP1_polymorphisme", nullptr));
        actionajouter->setText(QCoreApplication::translate("TP1_polymorphismeClass", "ajouter", nullptr));
        actionaffichage->setText(QCoreApplication::translate("TP1_polymorphismeClass", "affichage", nullptr));
        actionQuitter->setText(QCoreApplication::translate("TP1_polymorphismeClass", "Quitter", nullptr));
        label_nom->setText(QCoreApplication::translate("TP1_polymorphismeClass", "Nom :", nullptr));
        labelprenom->setText(QCoreApplication::translate("TP1_polymorphismeClass", "Pr\303\251nom :", nullptr));
        label_adresse->setText(QCoreApplication::translate("TP1_polymorphismeClass", "Adresse :", nullptr));
        label_titre->setText(QCoreApplication::translate("TP1_polymorphismeClass", "Titre :", nullptr));
        label_age->setText(QCoreApplication::translate("TP1_polymorphismeClass", "Age :", nullptr));
        label_telephone->setText(QCoreApplication::translate("TP1_polymorphismeClass", "T\303\251l\303\251phone", nullptr));
        label_email->setText(QCoreApplication::translate("TP1_polymorphismeClass", "Email :", nullptr));
        radioButton_professeur->setText(QCoreApplication::translate("TP1_polymorphismeClass", "Professeur", nullptr));
        radioButton_etudiant->setText(QCoreApplication::translate("TP1_polymorphismeClass", "Etudiant", nullptr));
        pushButton_ajout_personne->setText(QCoreApplication::translate("TP1_polymorphismeClass", "Ajout d'une personne", nullptr));
        lineEdit_telephone->setText(QCoreApplication::translate("TP1_polymorphismeClass", "__-__-__-__-__", nullptr));
        lineEdit_email->setText(QCoreApplication::translate("TP1_polymorphismeClass", "                     @", nullptr));
        menuFichier->setTitle(QCoreApplication::translate("TP1_polymorphismeClass", "Fichier", nullptr));
        menuAffichage->setTitle(QCoreApplication::translate("TP1_polymorphismeClass", "Affichage", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TP1_polymorphismeClass: public Ui_TP1_polymorphismeClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TP1_POLYMORPHISME_H
