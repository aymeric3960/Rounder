/*
Projet: Faire un programme pour arrondir des valeurs  
folder name: Fonction.c
Author:  Clauzel Aymeric 
Description: Fonctions pour arrondir 
Creation: 01.10.2022
Modif:  10.10.2022
*/
// Librairies stndr
#include <math.h>
// Librairies perso 
#include "header.h"


/*
Nom : Comp
Entrée / Sortie : Valeure introduite/arrondie
Descritpion: Fonction qui compare la partie après la virgule 
a différents seuils et retourne 
Autheur:  Clauzel Aymeric 
Creation: 01.10.2022
Modif:	10.10.2022
*/
double Comp(double _valIntroduite)
{
	double save = _valIntroduite;
	//R�cup�re uniquement la parite apr�s la virgule 
	_valIntroduite = _valIntroduite - floor(_valIntroduite);
	//op�rateur ternaire
	//(_valIntroduite < seuil1) ? _valIntroduite = floor(save) : ((_valIntroduite < seuil2) ?( _valIntroduite = (floor(save)+(seuil1*2))): (_valIntroduite = ceil(save)));
	//Test si plus petit que 0.25
	if (_valIntroduite < seuil1)
	{
		//Resultat = l'unit� "basse"
		return floor(save);

	}
	//Test si plus petit que 0.75
	else if (_valIntroduite < seuil2)
	{
		//Resultat = l'unit� "basse"+0.5
		return (floor(save) + (seuil1 * 2));
	}
	else
	{
		//Resultat = l'unit� "haute"
		return ceil(save);
	}
	
}
// Fonction d'arrondis au .50 
// Une strat ancetrale ?
// "faut comprendre les maths"
// maths--h... j'ai pas compris
double round50cent(double number) {
	return ((round(number * 2)) / 2);
}