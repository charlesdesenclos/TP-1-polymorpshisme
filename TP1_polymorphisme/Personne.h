#pragma once
class Personne
{
private :
	char nom;
	char prenom;
	int age;
	char telephone;
	char email;
	char adressse;

public:
	virtual void ajouter();
	virtual void afficher();
};

