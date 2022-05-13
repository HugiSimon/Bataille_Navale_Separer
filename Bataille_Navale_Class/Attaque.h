#pragma once
#include "Affiche.h"

#define MINL 1
#define MINC 1

void saisirAttaque(Case* mCase);
int validSaisiJoueur(char val[]);
void saisieJoueur(char valLigne[], char valCol[]);

//procedure Attaque bateau de flotteJoueur
void saisirAttaque(Case* mCase) { //

    char valLigne[4], valCol[4];

    saisieJoueur(valLigne, valCol);



    while (!validSaisiJoueur(valLigne) || !validSaisiJoueur(valCol) || (atoi(valLigne) < MINL || atoi(valLigne) > MAXL)
        || (atoi(valCol) < MINC || atoi(valCol) > MAXC)) {

        effaceEcran();
        printf("Mauvaise saisie, recommencer vous devez saisir une val numerique comprise entre %d et %d\n", VALMIN, VALMAX);

        saisieJoueur(valLigne, valCol);


    }
    mCase->ligne = atoi(valLigne);
    mCase->col = atoi(valCol);

}

//fct valide saisie joueur
int validSaisiJoueur(char val[]) { //

    int i;


    for (i = 0; i < strlen(val); i++) {

        if (!isdigit(val[i]))
            return 0;
    }

    return 1;


}

//procedure saisie val joueur

void saisieJoueur(char valLigne[], char valCol[]) { //


    printf("Entrez votre tir\n");

    printf("Entrez ligne :\n");
    scanf_s("%3s", valLigne, 4);
    fflush(stdin);

    printf("Entrez Colonne :\n");
    scanf_s("%3s", valCol, 4);
    fflush(stdin);


}
