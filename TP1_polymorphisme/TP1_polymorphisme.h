#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_TP1_polymorphisme.h"
#include <QTextEdit>
#include <QString>
#include <QPushButton>
#include <QComboBox>

class TP1_polymorphisme : public QMainWindow
{
    Q_OBJECT

public:
    TP1_polymorphisme(QWidget *parent = nullptr);
    ~TP1_polymorphisme();

private:
    Ui::TP1_polymorphismeClass ui;

    QLineEdit* LineEdit_liste_matiere_enseigner;
    QLineEdit* LineEdit_nbr_heures_asso;
    QLineEdit* LineEdit_tarif_horraire;
    QLineEdit* LineEdit_liste_matiere_suivies;
    QLineEdit* LineEdit_note_asso;
    QComboBox* LineEdit_classe;
    QPushButton* Button_OK;
    QLabel* label_liste_matiere_suivies;
    QLabel* label_note_asso;
    QLabel* label_classe;
    QComboBox* Combo_Box_classe;
    QLabel* label_liste_matiere_enseigner;
    QLabel* label_nbrheuresasso;
    QLabel* label_tarifhorraire;

public slots:
    void onButtonClicked();
    void onRadioButtonProfesseur(bool verif);
    void onRadioButtonEtudiant(bool verif);

    
};
