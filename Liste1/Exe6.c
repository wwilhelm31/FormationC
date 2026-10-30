#include<stdio.h>
//Écrivez un programme qui reçoit l'âge d'un utilisateur et utilise l'opérateur 
//ternaire pour vérifier s'il peut voter (âge supérieur ou égal à 18 ans). 
//Affichez 1 si l'utilisateur peut voter, et 0 s'il ne le peut pas.
void main () {

    int age, resultat;
    
    printf("Entrez votre age: ");
    scanf("%d", &age);

    resultat = age >= 18 ? 1 : 0 ;
    
    printf("\nSi le resultat est 1, vous pouvez voter. S'il est 0, vous ne pouvez pas encore voter."
           " Resultat: %d", resultat);

}