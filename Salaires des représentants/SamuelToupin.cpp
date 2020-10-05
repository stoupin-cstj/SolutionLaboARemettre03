// But :  Donne la possibilité à l’utilisateur de deviner le nombre contenu dans iRandom
// Auteur : Samuel Toupin
// Date : 2020-10-05


#include <iostream>
#include <time.h>
using namespace std;

int main()
{

	setlocale(LC_ALL, "");


// Déclaration des variables.

int iRandom; // permet de mémoriser le nombre choisi aléatoirement par l’ordinateur
float srand;
float rand;
int nombre;

// Demander de choisir un nombre de 0 à 100

    cout << "Veuillez entrer un nombre de 0 à 100";
	cin >> nombre;

	


	while (nombre >= 100 && nombre <= -1)
	{

		srand(time(0)); // pour activer l’aléatoire dans le programme
		iRandom = rand() % 101; // l’ordinateur calcule un nombre aléatoire entre 0 et 100 et le stocke dans iRandom
	


	
}
















	return 0;
}





/*

nombre                                       résultat
même nombre                                   Bravo, vous avez gagné
pas le même nombre 5 fois de suite            Vous avez perdu 
ce nombre n'est pas compris entre 0 et 100    Ce nombre n'est pas entre 0 et 100
perdu 1 fois                                  Il vous reste 4 chances
perdu 2 fois                                  Il vous reste 3 chances
perdu 3 fois                                  Il vous reste 2 chances
perdu 4 fois                                  Il vous reste 1 chance





*/