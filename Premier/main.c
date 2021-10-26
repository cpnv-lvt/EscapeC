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

    printf("Sin de 31 %f\n\n\n", sin(31));

    // Validation du nombre
    if(sin(nombre) == -0.404038) {
        printf()
    }

    system("Pause");
    return 0;
}
