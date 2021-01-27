#include <iostream>

#include "Vecteur3d.h"
#include "vecteur2d.h"

using namespace std;

int main()
{
	vecteur3d<float> vecteur1(5.005f, 7.25f, 25.17f);
	vecteur3d<float> vecteur2(1.700f, 4.25f, 40.00f);

	vecteur1.affiche();

	vecteur1.Somme(vecteur2);

	vecteur1.affiche();

	return 0;
}