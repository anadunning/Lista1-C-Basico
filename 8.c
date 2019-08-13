#include <stdio.h>

// Leia uma temperatura em graus Kelvin
// e apresente-a em graus Celsius.

float KelvinToCelsius(float K);

int main(){

    float TK, TC;

    printf("Informe a temperatura em Kelvin: ");
    scanf("%f", &TK);

    TC = KelvinToCelsius(TK);

    printf("\nA temperatura %.2f Kelvin corresponde a %.2f Celsius.\n", TK, TC);

    return 0;
}

float KelvinToCelsius(float K){

    float C;

    C = K - 273.15;

    return C;
}
