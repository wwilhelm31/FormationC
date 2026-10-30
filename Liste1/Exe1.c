#include<stdio.h>
//Écrivez un programme qui lit trois nombres 
//et calcule la moyenne.
void main () {

    float a, b, c;

    printf("Saisissez trois nombres:\n");
    scanf("%f\n%f\n%f", &a, &b, &c);

    float moyenne = (a + b + c)/3;

    printf("La moyenne est: %.2f", moyenne);
}