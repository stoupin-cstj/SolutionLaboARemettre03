// But :  Donne la possibilit� � l�utilisateur de deviner le nombre contenu dans iRandom
// Auteur : Samuel Toupin
// Date : 2020-10-05


#include <iostream>
#include <time.h>
using namespace std;

int main()
{

	setlocale(LC_ALL, "");


// D�claration des variables.

int iRandom; // permet de m�moriser le nombre choisi al�atoirement par l�ordinateur
float srand;
float rand;
int nombre;

// Demander de choisir un nombre de 0 � 100

    cout << "Veuillez entrer un nombre de 0 � 100";
	cin >> nombre;

	


	while (nombre >= 100 && nombre <= -1)
	{

		srand(time(0)); // pour activer l�al�atoire dans le programme
		iRandom = rand() % 101; // l�ordinateur calcule un nombre al�atoire entre 0 et 100 et le stocke dans iRandom
	


	
}
















	return 0;
}





/*

nombre                                       r�sultat
m�me nombre                                   Bravo, vous avez gagn�
pas le m�me nombre 5 fois de suite            Vous avez perdu 
ce nombre n'est pas compris entre 0 et 100    Ce nombre n'est pas entre 0 et 100
perdu 1 fois                                  Il vous reste 4 chances
perdu 2 fois                                  Il vous reste 3 chances
perdu 3 fois                                  Il vous reste 2 chances
perdu 4 fois                                  Il vous reste 1 chance





*/