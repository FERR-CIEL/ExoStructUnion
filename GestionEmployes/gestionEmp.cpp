#include <iostream>
#include <cstring>
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
	char Nom;
	char Prenom;
	dateEmbauche DateE;
	dateFonction DateA;
};