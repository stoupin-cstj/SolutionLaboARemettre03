// But : D�veloppez un programme qui entre les ventes brutes hebdomadaires de chaque repr�sentant et qui calcule et affiche son salaire
// Auteur : Samuel Toupin
// Date : 2020-10-05





#include <iostream>
using namespace std;

int main()
{


	setlocale(LC_ALL, "");
	// D�claration variables.

	int argentBase = 250;
	float argentVendu;
	float tauxComission = 0.075 ;
	float argentFait;
	int nbFois = 0 ;


	// Demander � l'utilisateur combien d'argent il a produit en ayant vendu des produits.

	cout << "Veuillez entrer l'argent fait en ayant vendu des produits chimiques : ";
	cin >> argentVendu;

	// Calculer l'argent que l'utilisateur � fait.

	while (argentVendu != -1)
	{
		
		argentFait = ((argentVendu * tauxComission) + argentBase);
		cout << "Vous avez fait : " << argentFait << "$" << endl;

		


		nbFois = nbFois + 1;
		



	}
	return 0;
}









/*

Plan test :

nombre argent vendu              argentfait
    0                                  250
	1                                  250.75
	2000                                 400
	-1                                 Quitter le programme




*/