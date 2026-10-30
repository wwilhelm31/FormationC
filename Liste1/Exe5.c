#include<stdio.h>
//Écrivez un programme qui reçoit un nombre saisi par l'utilisateur et utilise 
//l'opérateur ternaire pour vérifier si ce nombre est pair ou impair. 
//Affichez 1 si le nombre est pair et 0 s'il est impair.
void main () {

    int nombre, resultat;
    
    printf("Saisissez un nombre intiere: ");
    scanf("%d", &nombre);

    resultat = nombre%2== 0 ? 1 : 0 ;
    
    printf("%d", resultat);

}