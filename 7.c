#include <stdio.h>

// Leia uma temperatura em graus Fahrenheit
// e apresente-a em graus Celsius.

float FahrenheitToCelsius(float F);

int main(){

    float TF, TC;

    printf("Informe a temperatura em Fahrenheit: ");
    scanf("%f", &TF);

    TC = FahrenheitToCelsius(TF);

    printf("\nA temperatura %.2f F corresponde a %.2f em C.\n", TF, TC);

    return 0;
}

float FahrenheitToCelsius(float F){

    float C;

    C = 5 * (F - 32)/9;

    return C;
}
