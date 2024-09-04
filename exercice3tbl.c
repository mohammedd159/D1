#include <stdio.h>

int main() {
    int size;
    int somme;
    printf("veillez tapper un size d'un tableau : ");
    scanf("%d",&size);
    
    int tableau[size];
    
    for(int i=0;i<size;i++){
        printf("ecrire %i elemant de tableau:", i+1);
        scanf("%d",tableau[i]);
        somme += tableau[i];
    }
    printf("somme est %d",somme);
    
    

    return 0;
}