/*
 Clauzel Aymeric 
 01.10.2022
 Une fonction pour arrondir <x.25=x.0 >x.25=x.5 <X.75=x.5 >x.75=x+1.0
 Utilisant Zeal
*/

// Add Libs
#include <stdio.h>
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
        scanf_s("%lf",&valIntroduite);

        //Appel fonction d'arrondis puis l'affiche avec 2 décimales
        printf("Resultat =  %.2lf \n",Comp(valIntroduite));

        //l'affiche avec 2 décimales résultat strat macro
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