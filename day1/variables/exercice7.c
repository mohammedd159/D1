#include <stdio.h>

int main() {
    int 1er_nombre , 2eme_nombre , 2eme_nombre , moyen , somme;
    
     printf("veullez tapper le 1er_nombre");
     scanf("%d" &1er_nombre);
     1er_nombre *=2;
     printf("veullez tapper le 2eme_nombre");
     scanf("%d" &2eme_nombre);
     2eme_nombre *=3;
     printf("veullez tapper le 3eme_nombre");
     scanf("%d" &3eme_nombre);
     3eme_nombre *=5;
     
    somme=(1er_nombre * 2) + (2eme_nombre * 3) + (2eme_nombre* 5);
    moyen = somme/10;
     
     

    return 0;
}