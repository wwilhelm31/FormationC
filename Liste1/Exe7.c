#include<stdio.h>
//Écrivez un programme qui reçoit le prix d'un produit et utilise l'opérateur
// ternaire pour appliquer une réduction de 10 % si ce prix est supérieur à 100. 
//Affichez le prix final du produit après l'application de la réduction, le cas échéant.
void main ( ){
    
    float prix, prixfinal;

    printf("Saisissez le prix du produit:");
    scanf("%f", &prix);

    prix > 100 ?  printf("Nouveau prix: %.2f", prixfinal= prix * 0.9) : printf ("Vous n'avez pas eu droit a une reduction de prix.");

}