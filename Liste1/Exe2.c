#include<stdio.h>
//Écrivez un programme qui calcule l'aire d'un triangle.
void main () {
    float base, hauteur;

    printf("Nous allons vous aider a calculer l'aire du triangle.\n"
    "Indiquez-nous la valeur de la base du triangle :\n");
    scanf("%f", &base);

    printf("Indiquez-nous maintenant la valeur de la hauteur du triangle:\n");
    scanf("%f", &hauteur);

    float aire = (base * hauteur) / 2;

    printf("L'aire du triangle est egale a : %.2f", aire);

}