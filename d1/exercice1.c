#include <stdio.h>

int main() {
    int nombre;

    // Demande à l'utilisateur d'entrer un nombre
    printf("Entrez un nombre : ");
    scanf("%d", &nombre);

    // Affiche la table de multiplication en ordre décroissant
    printf("Table de multiplication de %d :\n", nombre);
    for (int i = 10; i >= 1; i--) {
        printf("%d x %d = %d\n", nombre, i, nombre * i);
    }

    return 0;
}