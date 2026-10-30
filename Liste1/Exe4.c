#include<stdio.h>
//Écrivez un programme dans lequel l'utilisateur saisit deux nombres.Utilisez 
//l'opérateur ternaire pour déterminer et afficher le plus petit des deux nombres.
void main () {

    int x, y, petit;

    printf("Saisissez deux valeurs entieres\n");
    scanf("%d\n%d", &x, &y);

    petit = x < y ? x : y ;

    printf("Le plus petit est :%d", petit); 
}