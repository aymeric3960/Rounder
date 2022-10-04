/*
 Clauzel Aymeric
 01.10.2022
 Une fonction pour arrondir <x.25=x.0 >x.25=x.5 <X.75=x.5 >x.75=x+1.0
 Utilisant Zeal
*/
#include "header.h"
#include <math.h>

double Comp(double _valIntroduite)
/*

*/
{
	double save = _valIntroduite;
	//Récupére uniquement la parite après la virgule 
	_valIntroduite = _valIntroduite - floor(_valIntroduite);
	//opérateur ternaire
	//(_valIntroduite < seuil1) ? _valIntroduite = floor(save) : ((_valIntroduite < seuil2) ?( _valIntroduite = (floor(save)+(seuil1*2))): (_valIntroduite = ceil(save)));
	//Test si plus petit que 0.25
	if (_valIntroduite < seuil1)
	{
		//Resultat = l'unité "basse"
		_valIntroduite = floor(save);

	}
	//Test si plus petit que 0.75
	else if (_valIntroduite < seuil2)
	{
		//Resultat = l'unité "basse"+0.5
		_valIntroduite = (floor(save) + (seuil1 * 2));
	}
	else
	{
		//Resultat = l'unité "haute"
		_valIntroduite = ceil(save);
	}
	return _valIntroduite;
}
// Fonction d'arrondis au .50 
// Une strat ancetrale ?
// "faut comprendre les maths"
// maths--h... j'ai pas compris
double round50cent(double number) {
	return ((round(number * 2)) / 2);
}