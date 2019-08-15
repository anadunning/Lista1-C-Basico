#include <stdio.h>

// Leia um valor de comprimento em polegadas e apresente-o em centímetros.

float inchesToCentim(float P);

int main(){

    float inches, cent;

    printf("Informe o comprimento em polegadas: ");

    scanf("%f", &inches);

    cent = inchesToCentim(inches);

    printf("O comprimento %.2f em polegadas corresponde a %.2f em centimetros.\n", inches, cent);

    return 0;
}

float inchesToCentim(float P){

    float C;

    C = P * 2.54;

    return C;
}
