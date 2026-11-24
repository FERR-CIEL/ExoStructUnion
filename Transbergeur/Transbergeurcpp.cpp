#include <iostream>
using namespace std;

void main(){

	struct casier { int px; int py; };

	char* reference;

	enum etat{vide, palette, rouleau};

	union contenu {
		struct palette { int poids; char* reference[19]; };
		struct rouleau { int longueur; int numero; };
	};

	int ensembleDesCasiers = 9;
	

	cout << "Programme Transbergeur" << endl;
}