
#include <stdio.h>

int main() {
    int size;
    printf("veillez tapper un size d'un tableau");
    scanf("%d",&size);
    
    int tableau[size];
    
    for(int i=0;i<size;i++){
        printf("ecrire %i elemant de tableau:", i++);
        scanf("%d",tableau[i]);
        for(int i=0;i<size;i++){
            printf("tableau[i]");
        }
    }
    

    return 0;
}