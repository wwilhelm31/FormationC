#include<stdio.h>
//Écrivez un programme qui reçoit un nombre et utilise l'opérateur ternaire pour le 
//classer comme positif, négatif ou nul. Affichez 1 pour positif, -1 pour négatif et 0 pour nul.
void main (){

    int nombre;
    printf("Entrez un nombre: ");
    scanf("%d", &nombre);
    nombre > 0 ? printf("1") : nombre < 0 ? printf("-1") : printf("0") ;
}
