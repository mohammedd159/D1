#include <stdio.h>

int main() {
   char chaine1[100],chaine2[100];
   int i = 0, identiques = 1;
   
   printf("entrez la première chaine :");
   scanf("%s", chaine2);
   
   printf("entrez la deuxième chaine :");
   scanf("%s",chaine2);
   
   while (chaine1[i] != '0' || chaine2[i] != '0'){
       if (chaine1[i] != chaine2[i]) {
           identiques = 0;
           break;
       }
       i++;
      
   }
   
   if (identiques == 1){
       printf("les deux chaines sont égales.\n");
   else {
       printf("les deux chaine sont differentes.\n");
   }
    return 0;
}