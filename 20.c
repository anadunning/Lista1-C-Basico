#include <stdio.h>

// Leia um valor de massa em quilogramas e apresente-o em libras.

float kgToLb(float K);

int main(){

    float kg, lb;

    printf("Informe o valor em quilogramas: ");
    scanf("%f", &kg);

    lb = kgToLb(kg);

    printf("O valor de %.2f em kg equivale a %.2f em libras.\n", kg, lb);

    return 0;
}

float kgToLb(float K){

    float L;

    L = K / 0.45;

    return L;
}
