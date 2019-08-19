#include <stdio.h>

// Faça a leitura de três valores e apresente como resultado a soma dos quadrados dos três valores lidos.

int sumSquareNum(int x, int y, int z);

int main(){

    int a, b, c, sum;

    scanf("%d %d %d", &a, &b, &c);

    sum = sumSquareNum(a, b, c);

    printf("Soma dos quadrados dos valores: %d\n", sum);

    return 0;
}

int sumSquareNum(int x, int y, int z){

    int sum;

    sum = (x * x) + (y * y) + (z * z);

    return sum;
}
