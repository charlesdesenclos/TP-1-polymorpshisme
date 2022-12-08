#pragma once

#include "Personne.h"

class Professeur
	:public Personne
{
private :
	float tarif;
	char* listematiere;
	int* nbrheures;

public :
	void ajouter();
	void afficher();
};

