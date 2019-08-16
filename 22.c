#include <stdio.h>

// Leia um valor de comprimento em jardas e apresente-o em metros.

float yardsToMetres(float J);

int main(){

    float yards, metres;

    printf("Informe o comprimento em jardas: ");
    scanf("%f", &yards);

    metres = yardsToMetres(yards);

    printf("O valor %.2f em jardas corresponde a %.2f metros.\n", yards, metres);

    return 0;
}

float yardsToMetres(float J){

    float M;

    M = 0.91 * J;

    return M;
}
