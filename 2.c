#include <stdio.h>

// Faça um programa que leia um número real e o imprima.

void printNumReal(float a);


int main(){

    float x;

    printf("Informe um numero real: ");
    scanf("%f", &x);

    printNumReal(x);

    return 0;
}

void printNumReal(float a){

    printf("\nO numero real informado foi: %.2f\n", a);
}
