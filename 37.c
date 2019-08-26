#include <stdio.h>

// Faça um programa que leia o valor de um produto e imprima o valor com desconto, tendo em vista que o desconto foi de 12%.

float prodDesconto(float preco);

int main(){

    float P, valorDesc;

    printf("Informe o valor de um produto: ");
    scanf("%f", &P);

    valorDesc = prodDesconto(P);

    printf("Valor do produto com desconto: %.2f\n", valorDesc);

    return 0;
}

float prodDesconto(float preco){

    const float desconto = 0.12;
    float novo;

    novo = preco - (desconto * preco);

    return novo;
}
