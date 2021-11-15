/**
 * Auteur:      L. Viret (CPNV)
 * Date:        26.10.2021
 * Titre:       Escape C - premier
 * Description: Ce projet, sous forme d'escape game, a pour but que les élèves s'autoévaluent en progressant grâce à ce qu'ils ont appris durant le module ICT403
 */

#include <stdio.h>
#include <windows.h>
#include <math.h>

int main() {
    // Gestion des accents dans la console
    SetConsoleOutputCP(65001);

    // Preparation de la variable
    int nombre = 0;

    printf("*************************************************************************************************\n");
    printf("*\tSalut à toi, aventurier de la programmation, dans cette suite de programmes en C.\t*\n");
    printf("*\tIci, il te faudra analyser, comprendre et résoudre les problèmes au fil du module.\t*\n");
    printf("*************************************************************************************************\n\n\n");

    printf("Quelle est l'année de naissance de Monsieur Viret ?\n");
    // Il faudrait demander a l'utilisateur l'annee de naissance de Monsieur Viret mais je ne sais plus comment faire...


    // Validation du nombre
    if(nombre == 1989) {
        printf("Bravo, vous avez réussi à résoudre le premier problème.\n\n")
    }

    system("Pause");
    return 0;
}