#include <stdio.h>

// Leia uma temperatura em graus Celsius
// e apresente-a em graus Kelvin.

float CelsiusToKelvin(float C);

int main(){

    float TC, TK;

    printf("Informe a temperatura em Celsius: ");
    scanf("%f", &TC);

    TK = CelsiusToKelvin(TC);

    printf("\nA temperatura %.2f C corresponde a %.2f K.\n", TC, TK);

    return 0;
}

float CelsiusToKelvin(float C){

    float K;

    K = (C + 273.15);

    return K;
}
