#include <stdio.h>

// Leia o tamanho do lado de um quadrado e imprima como resultado a sua área.

int squareArea(int l);

int main(){

    int L, area;

    printf("Informe o lado do quadrado: ");
    scanf("%d", &L);

    area = squareArea(L);

    printf("Area do quadrado: %d\n", area);

    return 0;
}

int squareArea(int l){

    int A;

    A = l * l;

    return A;
}
