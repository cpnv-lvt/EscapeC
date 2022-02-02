/**
 * Auteur:      L. Viret (CPNV)
 * Date:        15.11.2021
 * Titre:       Escape C - septieme
 * Description: Ce projet, sous forme d'escape game, a pour but que les élèves s'autoévaluent en progressant grâce à ce qu'ils ont appris durant le module ICT403
 */

#include <stdio.h>
#include <windows.h>

#define ANNEE_EN_COURS 2021

/**
 * Demande l'année de naissance à l'utilisateur
 * @return année de naissance
 */
int demanderAnneeNaissance() {
    int anneeNaissance;
    printf("Quel est votre année de naissance ?\n");
    scanf("%d", &anneeNaissance);
    return anneeNaissance;
}

int calculNombre(int valeur, int nombreParFois) {
    return valeur * nombreParFois;
}

int nombreAnnee(int anneeNaissance) {
    return ANNEE_EN_COURS - anneeNaissance;
}

int nombreSemaines(int nombreAnnee) {
    return calculNombre(nombreAnnee, 52);
}

int nombreJours(int nombreAnnee) {
    return calculNombre(nombreAnnee, 365);
}

/**
 * Programme principal permettant de calculer le nombre d'année, de mois et de jours vécus par l'utilisateur
 * @return 0 si tout s'est bien déroulé
 */
int main() {
    // Gestion des accents dans la console
    SetConsoleOutputCP(65001);

    // Preparation des variables
    int anneeNaissance = 2003;
    int age = 0;

    printf("*************************************************************************************************\n");
    printf("*\tSalut à toi, aventurier de la programmation, dans cette suite de programmes en C.\t*\n");
    printf("*\tIci, il te faudra analyser, comprendre et résoudre les problèmes au fil du module.\t*\n");
    printf("*************************************************************************************************\n\n\n");

    // Le programme ne fonctionne pas correctement, il faut le corriger

    // Demande l'année de naissance
    demanderAnneeNaissance();

    // Calcul de l'age
    age = nombreAnnee(anneeNaissance);

    // Affichage à l'utilisateur
    printf("Vous avez vécu :\n");
    printf("%d années\n", age);
    printf("%d semaines\n", nombreSemaines(age));
    printf("%d jours\n", nombreJours(age));


    system("Pause");
    return 0;
}