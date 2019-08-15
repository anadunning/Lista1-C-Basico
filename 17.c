#include <stdio.h>

// Leia um valor de comprimento em centímetros e apresente-o em polegadas.

float centToInches(float C);

int main(){

    float cent, inches;

    printf("Informe um comprimento em centimetros: ");
    scanf("%f", &cent);

    inches = centToInches(cent);

    printf("O valor de %.2f centimetros corresponde a %.2f em polegadas.\n", cent, inches);

    return 0;
}

float centToInches(float C){

    float P;

    P = C / 2.54;

    return P;
}
