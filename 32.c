#include <stdio.h>

// Leia um número inteiro e imprima a soma do sucessor de seu triplo com o antecessor de seu dobro.

int calcSum(int n);

int main(){

    int N, soma;

    printf("Informe um numero inteiro: ");
    scanf("%d", &N);

    soma = calcSum(N);

    printf("Soma do triplo do sucessor com o dobro do antecessor: %d\n", soma);

    return 0;
}

int calcSum(int n){

    int sum;

    sum = (3 * (n + 1)) + (2 * (n - 1));

    return sum;
}
