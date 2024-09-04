// Online C compiler to run C program online 5
#include <stdio.h>

int main() {
    float celsius;
     printf("entrer la temperature en celsius");
     scanf("%f", &celsius);
     
     if (celsius < 0) {
         printf("l'eau est letat solide. (GLASE) \n");
    }
     else if (celsius >= 0 && celsius < 100) {
         printf("l'eau est letat liquide.");
     }
     else {
         ("l'eau est letat gazeau (vapeur)");
     }
    return 0;