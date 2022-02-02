/**
 * Auteur:      L. Viret (CPNV)
 * Date:        15.11.2021
 * Titre:       Escape C - quatrieme
 * Description: Ce projet, sous forme d'escape game, a pour but que les élèves s'autoévaluent en progressant grâce à ce qu'ils ont appris durant le module ICT403
 */

#include <stdio.h>
#include <windows.h>

#define ANNEE_EN_COURS 2021

int main() {
    // Gestion des accents dans la console
    SetConsoleOutputCP(65001);

    // Preparation des variables
    int anneeNaissance;
    int age = 0;

    printf("*************************************************************************************************\n");
    printf("*\tSalut à toi, aventurier de la programmation, dans cette suite de programmes en C.\t*\n");
    printf("*\tIci, il te faudra analyser, comprendre et résoudre les problèmes au fil du module.\t*\n");
    printf("*************************************************************************************************\n\n\n");

    // Demande de l'age à l'utilisateur
    printf("Quel est votre année de naissance ?");
    scanf("%d", &anneeNaissance);

    // Calcul de l'age
    age = ANNEE_EN_COURS - anneeNaissance;

    // L'analyse de l'age ne fonctionne pas correctement, pouvez-vous le corriger ?
    if (age >= 18)
        printf("Vous êtes majeur\n");
        if (age >= 21)
            printf("Vous êtes majeur aux Etats Unis !\n");
    else
        printf("Vous êtes mineur\n");

        if (age >= 16)
            printf("Attention, la bière et le vin sont à boire avec modération\n");


    system("Pause");
    return 0;
}