/*
 Clauzel Aymeric
 01.10.2022
 Une fonction pour arrondir <x.25=x.0 >x.25=x.5 <X.75=x.5 >x.75=x+1.0
 Utilisant Zeal
*/
#ifndef HEADER_H
#define HEADER_H

#define seuil1 0.25
#define seuil2 0.75
//macro 
#define MComp(x)  ((round(x * 2)) / 2)

double Comp(double _valIntroduite);
double round50cent(double number);
#endif