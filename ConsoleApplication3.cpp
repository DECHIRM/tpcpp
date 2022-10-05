#include "header.h"
#include <iostream>

using namespace std;

pile_entier::pile_entier(int n = 20) // taille par défaut: 20
{
	taille = n;
	pile = new int[taille]; // taille de la pile
	hauteur = 0;
	cout << "On a fabrique une pile de " << taille << " elements\n";
}

pile_entier::~pile_entier()
{
	delete pile; // libère la mémoire
}

void pile_entier::empile(int p)
 {
	*(pile + hauteur) = p; hauteur++;
}
int pile_entier::depile()
{
	hauteur--;
	int res = *(pile + hauteur);
	return res;
}

int pile_entier::pleine()
{
	if(hauteur == taille)
		return 1;
	return 0;
}

int pile_entier::vide()
 {
	if(hauteur == 0)
		return 1;
	return 0;
}

void main()
 {
	pile_entier a, b(15); // pile automatique
	a.empile(8);
	if(a.vide() == 1) cout << "a vide\n";
	else cout << "a non vide\n";
		pile_entier *adp; // pile dynamique
	adp = new pile_entier(5); // pointeur sur pile de 5 entiers
	for (int i = 0; adp->pleine() != 1; i++) adp->empile(10 * i);
	cout << "\nContenu de la pile dynamique:\n";
	for(int i = 0; i < 5; i++)
		if(adp->vide() != 1) cout << adp->depile() << "\n";
	_getch();
}