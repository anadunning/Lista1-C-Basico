#include <stdio.h>

// Leia um número inteiro e imprima o seu antecessor e o seu sucessor.

int predNum(int n);
int sucNum(int n);

int main(){

    int N, P, S;

    printf("Informe um numero: ");
    scanf("%d", &N);

    P = predNum(N);
    S = sucNum(N);

    printf("Antecessor de %d: %d\n", N , P);
    printf("Sucessor de %d: %d\n", N, S);

    return 0;
}

int predNum(int n){

    int p;

    p = n - 1;

    return p;
}

int sucNum(int n){

    int s;

    s = n + 1;

    return s;
}
