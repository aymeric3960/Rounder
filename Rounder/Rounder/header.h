/*
Projet: Faire un programme pour arrondir des valeurs  
folder name: header.h
Author:  Clauzel Aymeric 
Description: Fichier d'en tête 
Creation: 01.10.2022
Modif:  10.10.2022
*/

#ifndef HEADER_H
#define HEADER_H

//Definitions
#define seuil1 0.25
#define seuil2 0.75

//macro 
#define MComp(x)  ((round(x * 2)) / 2)

//prototypes
double Comp(double _valIntroduite);
double round50cent(double number);

#endif