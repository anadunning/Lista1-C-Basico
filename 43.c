#include <stdio.h>

/*
Escreva um programa de ajuda para vendedores. A partir de um valor total lido, mostre:                                                                                                                                                                        o total a pagar com desconto de 10%;
o valor de cada parcela, no parcelamento de 3  sem juros;
a comissao do vendedor, no caso da venda ser a vista (5% sobre o valor com desconto)
a comissao do vendedor, no caso da venda ser parcelada (5% sobre o valor total)"
*/

int main(){

    float venda, venda10, valorParc, comisVista, comisParc;
    const float desconto = 0.10;
    const int numParc = 3;

    printf("Informe o valor da venda realizada: ");
    scanf("%f", &venda);

    venda10 = venda - (venda * desconto);
    valorParc = venda / numParc;

    comisVista = venda10 * 0.05;
    comisParc = venda * 0.05;

    printf("Total a pagar com 10 por cento de desconto: %.2f\n", venda10);
    printf("Valor de cada parcela: %.2f\n", valorParc);
    printf("Comissao do vendedor em venda a vista: %.2f\n", comisVista);
    printf("Comissao do vendedor em venda parcelada: %.2f\n", comisParc);

    return 0;
}

