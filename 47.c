#include <stdio.h>

// Leia um numero inteiro de 4 digitos (de 1000 a 9999) e imprima 1 digito por linha.

int main(){

    char N[5];
    int i;

    printf("Informe um numero inteiro entre 1000 e 9999: ");
    scanf("%s", N);

    for(i = 0; i < 4; i++){
        printf("%c\n", N[i]);
    }

    return 0;
}
