#include <stdio.h>

// Fa�a um programa que leia um n�mero real e o imprima.

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
