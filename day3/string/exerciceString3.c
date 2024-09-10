#include <stdio.h>

int main() {
    char chaine1[100],chaine2[100],resultat[200];
    int i = 0, j = 0;
    
    printf("entrez la première chaine :");
    scanf("%s",chaine1);
    
    printf("entrez la deuxième chaine ;");
    scanf("%s",chaine2);
    
    while(chaine1[i] != '\0'){
        resultat[i] = chaine1[i];
        i++;
        
        
    while (chaine2[i] != '\0'){
        resultat[i] = chaine2[j];
        i++;
        j++;
        
        resultat[i] = '\0';
        
        printf("la chaine concatenee est : %s\n",resultat);
    }
    }

    return 0;
}