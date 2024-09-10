#include <stdio.h>

int main() {
   char chaine [100];
   int longueur = 0, i = 0 ;
   
   printf("entrez une chaine de caractères :");
   scanf("%s", chaine);
   
   while (chaine[i] != '\0'){
       longueur++;
       i++;
   }
   printf("le longueur de la chaine est : %d\n",longueur);
    return 0;
}