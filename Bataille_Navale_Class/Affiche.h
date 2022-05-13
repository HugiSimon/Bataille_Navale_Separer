#pragma once
#include "TJoueur.h"

void afficheDebug(Flotte f);
void effaceEcran();

//procedure efface
void effaceEcran() { //

    puts("Appuyer sur enter pour continuer\n");
    getchar();
    system("cls");

}

//Affichage val col et ligne bateau pour debug
void afficheDebug(Flotte f) { //

    int i, j;
    for (i = 0; i < NBBATEAU; i++) {
        for (j = 0; j < MAXCASE; j++) {
            printf("ligne : %d\n", f.nBateau[i].nCase[j].ligne);
            printf("col : %d\n", f.nBateau[i].nCase[j].col);
        }
        printf("\n");
    }


}
