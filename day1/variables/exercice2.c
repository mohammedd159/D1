// Online C compiler to run C program online 2
#include <stdio.h>

int main() {
    float celsius;
    float kelvin;
    
    printf("entrez la temperature en crlsius:");
    scanf("%f", &celsius);
    
    kelvin = celsius + 273.15;
    
    printf("la temperature en kelvin est: %.2f \n" , kelvin);

    return 0;
}