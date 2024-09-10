// Online C compiler to run C program online 1
#include <stdio.h>

int main() {
    char nom[50];
    char prenom[50];
    int age;
    char sexe;
    char email[100];
    
    printf("enter votre nom");
    scanf("%s", &nom);
    
    printf("enter votre prenon");
    scanf("%s", &prenom);
    
    printf("entrer votre age");
    scanf("%d", &age);
    
    printf("entrer votre sexe");
    scanf("%s", &sexe);
    
    printf("entrer votre email");
    scanf("%s", &email);
    
    printf("\n information personnelles: \n");
    printf("nom: %s \n, nom");
    printf("prenom %s \n, prenom");
    printf("age %d \n, age");
    printf("sexe %s \n, sexe");
    printf("email %s \n, email");
    
    

    return 0;
}