/**
 * Auteur:      L. Viret (CPNV)
 * Date:        26.10.2021
 * Titre:       Escape C - deuxieme
 * Description: Ce projet, sous forme d'escape game, a pour but que les élèves s'autoévaluent en progressant grâce à ce qu'ils ont appris durant le module ICT403
 */

#include <stdio.h>
#include <windows.h>
#include <math.h>

int main() {
    // Gestion des accents dans la console
    SetConsoleOutputCP(65001);

    // Preparation des variables
    int nombre = 1989;

    printf("*************************************************************************************************\n");
    printf("*\tSalut à toi, aventurier de la programmation, dans cette suite de programmes en C.\t*\n");
    printf("*\tIci, il te faudra analyser, comprendre et résoudre les problèmes au fil du module.\t*\n");
    printf("*************************************************************************************************\n\n\n");

    // Calcul
    resultat = sin((2019 - nombre) * M_PI / 180);

    // Validation du resultat
    if(resultat == (1.0f/2.0f)) {
        printf("Bravo, vous avez réussi à résoudre le deuxième problème.\n\n");
    }

    system("Pause");
    return 0;
}