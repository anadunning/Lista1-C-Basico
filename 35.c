#include <stdio.h>
#include <math.h>

// Sejam a e b os catetos de um triângulo, onde a hipotenusa
// é obtida pela equação: hipotenusa = sqrt(a2 + b2).
// Faça um programa que receba os valores de a e b e
// calcule o valor da hipotenusa através da equação.
// Imprima o resultado dessa operação.

int calcHypot(int a, int b);

int main(){

    int A, B, H;

    printf("Informe o valor dos catetos A e B: ");
    scanf("%d %d", &A, &B);

    H = calcHypot(A, B);

    printf("Valor da hipotenusa: %d\n", H);

    return 0;
}


int calcHypot(int a, int b){

    int h;

    h = sqrt((a * a) + (b * b));

    return h;
}
