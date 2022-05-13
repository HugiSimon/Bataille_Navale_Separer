#pragma once
#include "TBool.h"

typedef struct Case { //


    int ligne;
    int col;


}Case;

void createCase(int l, int c, Case* mCase);
enum Bool cmpCase(Case mCase, Case tCase);


void createCase(int l, int c, Case* mCase) {


    mCase->ligne = l; //creation ligne
    mCase->col = c; //creation colonne


}

//Fct de comparaison de cases
//Return True si 2 case ligne et col sont =
enum Bool cmpCase(Case mCase, Case tCase) { //


    if (mCase.col == tCase.col && mCase.ligne == tCase.ligne)
        return True;
    else
        return False;

}