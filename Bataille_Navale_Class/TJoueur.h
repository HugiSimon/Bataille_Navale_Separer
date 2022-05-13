#pragma once
#include "TFlotte.h"

enum etatJoueur { //

    gagne, perd

}etatJoueur;

void initFlotteJoueur(Flotte* flotteJoueur1, Flotte* flotteJoueur2, Case mCase);
enum etatJoueur etatJ(Flotte f);

//initFlotteJoueur
void initFlotteJoueur(Flotte* flotteJoueur1, Flotte* flotteJoueur2, Case mCase) { //


    printf("Initialisation Bateaux Player 1\n");

    fPlayer(mCase, flotteJoueur1);

    puts("Appuyer sur enter pour continuer\n");
    getchar();
    fflush(stdin);


    printf("Initialisation Bateaux Player 2\n");

    fPlayer(mCase, flotteJoueur2);

    puts("Appuyer sur enter pour continuer\n");
    getchar();
    fflush(stdin);





}

//retourne  etat du joueur
enum etatJoueur etatJ(Flotte f) { //


    if (etatFlot(f) == aSombrer)
        return perd;
    else
        return gagne;


}