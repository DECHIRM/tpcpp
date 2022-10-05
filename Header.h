#include <conio.h>

class pile_entier
{
private:
	int *pile;
	int taille;
	int hauteur;
public:
	pile_entier(int n); // constructeur, taille de la pile
	~pile_entier(); // destructeur
	void empile(int p); // ajoute un élément
	int depile(); // dépile un élément
	int pleine(); // 1 si vrai 0 sinon
	int vide(); // 1 si vrai 0 sinon
};