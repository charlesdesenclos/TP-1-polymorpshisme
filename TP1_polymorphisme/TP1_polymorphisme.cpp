#include "TP1_polymorphisme.h"

TP1_polymorphisme::TP1_polymorphisme(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);
    
    
    
    
}

TP1_polymorphisme::~TP1_polymorphisme()
{

}

void TP1_polymorphisme::onButtonClicked()
{
    QString nom = ui.lineEdit_nom->text();
    QString prenom = ui.lineEdit_prenom->text();
    QString age = ui.lineEdit_age->text();
    QString telephone = ui.lineEdit_telephone->text();
    QString email = ui.lineEdit_email->text();
    QString adresse = ui.lineEdit_adresse->text();

}

void TP1_polymorphisme::onRadioButtonProfesseur(bool verif)
{
    if (verif == true)
    {
        // Affichage des matières enseignées

        label_liste_matiere_enseigner = new QLabel(this);
        label_liste_matiere_enseigner->setText("Liste des matieres enseignees : ");
        label_liste_matiere_enseigner->setGeometry(50, 300, 160, 50);
        LineEdit_liste_matiere_enseigner = new QLineEdit(this);
        LineEdit_liste_matiere_enseigner->setGeometry(200, 300, 100, 90);

        // Affichage des Nombres d'heures associées

        label_nbrheuresasso = new QLabel(this);
        label_nbrheuresasso->setText("Nbr d'heures associees : ");
        label_nbrheuresasso->setGeometry(350, 300, 120, 50);
        LineEdit_nbr_heures_asso = new QLineEdit(this);
        LineEdit_nbr_heures_asso->setGeometry(470, 300, 100, 90);

        // Affichage des Tarifs Horaires

        label_tarifhorraire = new QLabel(this);
        label_tarifhorraire->setText("Tarif Horaire :");
        label_tarifhorraire->setGeometry(50, 400, 100, 50);
        LineEdit_tarif_horraire = new QLineEdit(this);
        LineEdit_tarif_horraire->setGeometry(120, 415, 100, 20);
    }
    
}

void TP1_polymorphisme::onRadioButtonEtudiant(bool verif)
{
    if (verif == true)
    {
        // Affichage de la Liste des matières suvies
        LineEdit_liste_matiere_suivies = new QLineEdit(this);
        LineEdit_liste_matiere_suivies->setGeometry(200, 300, 100, 90);
        label_liste_matiere_suivies = new QLabel(this);
        label_liste_matiere_suivies->setText("Listes des matieres suivies : ");
        label_liste_matiere_suivies->setGeometry(50, 300, 140, 50);

        // Affichage des notes associées 

        label_note_asso = new QLabel(this);
        label_note_asso->setText("Notes associees : ");
        label_note_asso->setGeometry(350, 300, 100, 50);
        LineEdit_note_asso = new QLineEdit(this);
        LineEdit_note_asso->setGeometry(450, 300, 100, 90);

        // Affichage des classes 

        label_classe = new QLabel(this);
        label_classe->setText("Classe : ");
        label_classe->setGeometry(50, 400, 100, 50);
        Combo_Box_classe = new QComboBox(this);
        Combo_Box_classe->setEditText("TE1");
        Combo_Box_classe->setEditText("TE2");
        Combo_Box_classe->setEditText("FEE1");
        Combo_Box_classe->setEditText("FEE2");
        Combo_Box_classe->setGeometry(100, 415, 100, 20);
    }
    
}

