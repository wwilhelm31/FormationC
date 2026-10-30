#include<stdio.h>
//Écrivez un programme qui demande une durée en secondes 
//et la convertit en heures, minutes et secondes.
void main () {

    int tempstotal, heures, reste, minutes, secondes;

    printf("Indiquez le nombre total de secondes que vous souhaitez convertir :\n");
    scanf("%d", &tempstotal);

    heures = tempstotal/3600;
    reste = tempstotal%3600;
    minutes = reste/60;
    secondes = reste%60;

    printf("Resultat: %d Heures  %d Minutes  %d Secondes", heures, minutes, secondes);
}