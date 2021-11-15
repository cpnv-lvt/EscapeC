/**
 * Auteur:      L. Viret (CPNV)
 * Date:        15.11.2021
 * Titre:       Escape C - troisieme
 * Description: Ce projet, sous forme d'escape game, a pour but que les élèves s'autoévaluent en progressant grâce à ce qu'ils ont appris durant le module ICT403
 */

#include <stdio.h>
#include <windows.h>

int main() {
    // Gestion des accents dans la console
    SetConsoleOutputCP(65001);

    // Preparation des variables
    float nombre = 0.5f;
    int resultat = 0;

    printf("*************************************************************************************************\n");
    printf("*\tSalut à toi, aventurier de la programmation, dans cette suite de programmes en C.\t*\n");
    printf("*\tIci, il te faudra analyser, comprendre et résoudre les problèmes au fil du module.\t*\n");
    printf("*************************************************************************************************\n\n\n");

    // On a besoin de retrouver l'angle à l'origine du nombre dont on a déjà fait le sinus
    // Pour cela, il faut faire l'arc sinus du nombre pour obtenir l'angle en radian puis transformer cet angle en degres



    system("Pause");
    return 0;
}