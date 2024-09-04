#include <stdio.h>

int main() {
    
    int nling = 7;

    for (int i=0;i<nling;++i){
        for (int j=0 ; j<nling-i; j++){
            printf (" ");
        }
        for (int G=0; G <= i*2;G++){
            printf ("*");
        }
        printf ("\n");
    }
    return 0;
}