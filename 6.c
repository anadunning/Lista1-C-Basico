#include <stdio.h>

//Leia uma temperatura em graus Celsius
// e apresente-a em graus Fahrenheit.

float CelsiusToFahrenheit(float C);

int main(){

    float TC, TF;

    printf("Informe a temperatura em Celsius: ");
    scanf("%f", &TC);

    TF = CelsiusToFahrenheit(TC);

    printf("\nA temperatura %.2f C correspondente a %.2f F.\n", TC, TF);
    return 0;
}

float CelsiusToFahrenheit(float C){

    float F;

    F = C * (9 / 5) + 32;

    return F;
}
