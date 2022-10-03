/*
 Clauzel Aymeric 
 01.10.2022
 Une fonction pour arrondir <x.25=x.0 >x.25=x.5 <X.75=x.5 >x.75=x+1.0
 Utilisant Zeal
*/

// Add Libs
#include <stdio.h>
#include <math.h>
#define seuil1 0.25
#define seuil2 0.75
//macro 
#define MComp(x)  ((round(x * 2)) / 2)

//Fonctions
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
    if(_valIntroduite < seuil1)
    {
        //Resultat = l'unité "basse"
        _valIntroduite = floor(save);

    }
    //Test si plus petit que 0.75
    else if (_valIntroduite < seuil2)
    {
        //Resultat = l'unité "basse"+0.5
        _valIntroduite = (floor(save)+(seuil1*2));
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