#include <stdio.h>

// Leia um n�mero real e
// imprima o resultado do quadrado desse n�mero.

void printSqr(float a);

int main(){

    float x;

    printf("Informe um numero real: ");
    scanf("%f", &x);

    printSqr(x);

    return 0;
}

void printSqr(float a){

    printf("\nQuadrado do numero: %.2f\n", a*a);
}

