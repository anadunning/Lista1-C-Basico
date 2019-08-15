#include <stdio.h>

// Leia um valor de massa em libras e apresente-o em quilogramas.

float lbToKg(float L);

int main(){

    float lb, kg;

    printf("Informe o valor em libras: ");
    scanf("%f", &lb);

    kg = lbToKg(lb);

    printf("O valor de %.2f libra(s) corresponde a %.2f quilograma(s)\n", lb, kg);

    return 0;
}

float lbToKg(float L){

    float K;

    K = L * 0.45;

    return K;
}
