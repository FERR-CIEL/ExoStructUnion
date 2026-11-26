#include <iostream>
#include <cstring>
#include <string.h>
using namespace std;

struct dateEmbauche{
	int jour;
	int mois;
	int annee;
};

struct dateFonction {
	int jour;
	int mois;
	int annee;
};

struct Semploye {
	char Nom[50];
	char Prenom[50];
	dateEmbauche DateE;
	dateFonction DateF;
};

void main() {

	dateEmbauche DateE;
	dateFonction DateF;
	Semploye Employe;

	DateE.jour = 10;
	DateE.mois = 12;
	DateE.annee = 2015;

	DateF.jour = 13;
	DateF.mois = 12;
	DateF.annee = 2015;

	Employe.DateE = DateE;
	Employe.DateF = DateF;
	strcpy_s(Employe.Nom, "Dupont");
	strcpy_s(Employe.Prenom, "Alice");

}