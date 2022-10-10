/*
Projet: Faire un programme pour arrondir des valeurs  
folder name: Rounder.c
Author:  Clauzel Aymeric 
Description: Corps d'un programme pour s'entrainer à faire des chosees
Une entrée utilisateur donne un chiffre a virgule 
La sortie est le chiffre arrondis à la demie
Creation: 01.10.2022
Modif:  10.10.2022
*/

// Librairies stndr
#include <stdio.h>
// Librairies perso 
#include "header.h"

// corps
void main(void)
{
    //VarLoc 
    double valIntroduite = 0;
    char retry='Y';
    
    do
    {
        //Affiche la demande
        printf("Bjr, Introduire un nombre \n");
        //Récupére une valeure 
        scanf("%lf",&valIntroduite);

        //Appel fonction d'arrondis puis l'affiche avec 2 décimales
        printf("Resultat =  %.2lf \n",Comp(valIntroduite));

        //l'affiche avec 2 décimales résultat macro
        //printf("Resultat =  %.2lf \n", MComp(valIntroduite));

        //Appel fonction strat d'arrondis puis l'affiche avec 2 décimales
        //printf("Resultat =  %.2lf \n",round50cent(valIntroduite));

        //affiche demande pour continuer ?
        printf("Wanna rety? ( Yes = Y, No = N) \n");

        //vider la pile 
        getchar();
        //récupération de la réponse  
        retry = getchar();
        //test fct gets: obtenir un char
        //gets(&retry);     
    } while( retry == 'Y' || retry == 'y' || retry == 'o' || retry == 'O');
}
/*
 Remarques : 
 Après  le premier user input a valeure récupérée est juste
 lors de la deuxième récupération: \n
 alors  pourquoi après le deuxième pas ? reset pille à chaque itération??
*/