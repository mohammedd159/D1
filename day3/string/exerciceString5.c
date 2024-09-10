#include <stdio.h>
#include <string.h>

int main() {
    char chaine[100];
    int longueur, i;
    
    printf("entrez une chaine de caracteres");
    gets(chaine);
    
    longueur = strlen (chaine);
    
    printf("la chaine inversee est :");
    for (i = longueur - 1; i >= 0; i--){
        printf("%c",chaine[i]);
    
    }
        printf("\n");

    return 0;
}