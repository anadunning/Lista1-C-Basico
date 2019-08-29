#include <stdio.h>
#include <string.h>

// Faca um programa que leia um numero inteiro positivo de tres dıgitos (de 100 a 999).
// Gere outro numero formado pelos dıgitos invertidos do numero lido.
// Exemplo: Numero lido = 123, Numero Gerado = 321.

void invertNum(char N[5]);

int main(){

    char num[5];
    int i;

    printf("Informe um numero de tres digitos entre 100 e 998: ");
    gets(num);

    printf("Numero gerado a partir do lido: ");

    invertNum(num);

    printf("\n");

    return 0;
}

void invertNum(char N[5]){

    int i;

    for(i = strlen(N) - 1; i >= 0; i--){

        printf("%c", N[i]);
    }
}
