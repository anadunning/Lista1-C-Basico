#include <stdio.h>

// Peça ao usuário para digitar três valores inteiros
// e imprima a soma deles.

int soma(int a, int b, int c);

int main(){

    int x, y, z, resultado;

    printf("Informe tres numeros inteiros: ");
    scanf("%d %d %d", &x, &y, &z);

    resultado = soma(x, y, z);

    printf("\nSoma dos tres inteiros: %d\n", resultado);

    return 0;
}


int soma(int a, int b, int c){

    int soma;
    soma = a + b + c;

    return soma;
}
