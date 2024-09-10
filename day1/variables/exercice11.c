// Online C compiler to run C program online 11
#include <stdio.h>
#include <math.h>
int main ()
{
    float largeur, longeur;
    float S, P;
    printf("Veuillez entrer la largeur du rectangle : ");
    scanf("%f",&largeur);
    printf("Veuillez entrer la longeur du rectangle : ");
    scanf("%f",&longeur);
    S = largeur * longeur;
    P = (largeur + longeur) * 2;
    printf("Le perimetre du rectangle est : %.2f \n", P);
    printf("La surface du rectangle est : %.2f \n", S);

    return 0;
