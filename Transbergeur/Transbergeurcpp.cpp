#include <iostream>
#include <cstring>
using namespace std;

int px, py;

enum Eetat { vide, palette, rouleau };

struct Spalette { int poids; char reference[20]; };
struct Srouleau { float longueur; int numero; };

union Ucontenu {
	Spalette paletteS;
	Srouleau rouleauS;
};

struct Scasier { 
	int px;
	int py; 
	Ucontenu contenu;
	Eetat etat;
};

Scasier ensembleDesCasiers[9];

void main(){

	
	Srouleau ro1 = {10.5, 552};

	Spalette pa1;
	pa1.poids = 25;
	strcpy_s(pa1.reference, "Ref1");

	Eetat etatC1 = Eetat::vide;
	
	Ucontenu cont;
	cont.paletteS = pa1;
	cont.rouleauS = ro1;

	Scasier c1;
	c1.contenu = cont;
	c1.etat = rouleau;
	c1.px = 2;
	c1.py = 3;

	Scasier c2;
	cont.paletteS = pa1;
	c2.contenu = cont;
	c2.etat = palette;

	ensembleDesCasiers[0] = c1;
	ensembleDesCasiers[2] = c2;

	cout << "Programme Transbergeur" << endl;
}