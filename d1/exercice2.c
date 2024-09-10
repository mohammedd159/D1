#include <stdio.h>

int main() {
    int nombre, reste;

    printf("Entrez un entier : ");
    scanf("%d", &nombre);

    printf("L'inverse de %d est : ", nombre);

    while (nombre != 0) {
        
        reste = nombre % 10;
        
        printf("%d", reste);
       
        nombre = nombre / 10;
    }

    printf("\n");

    return 0;
}