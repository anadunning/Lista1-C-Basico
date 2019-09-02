#include <stdio.h>

/*
Escreva um programa de ajuda para vendedores. A partir de um valor total lido, mostre:                                                                                                                                              o total a pagar com desconto de 10%;
o total a pagar com desconto de 10%;
o valor de cada parcela, no parcelamento de 3  sem juros;
a comissao do vendedor, no caso da venda ser a vista (5% sobre o valor com desconto)
a comissao do vendedor, no caso da venda ser parcelada (5% sobre o valor total).

Write a program to help salespeople. From a total input read, print the following:
the total to be paid with a 10% discount;
the value of each installment when paying in three installments with no interest;
the salesperson's comission, when the sale is paid in cash (5% over the value with discount)
the salesperson's commision, when the sale is on credit (5% over the total).
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

    printf("Total a pagar com 10%% de desconto: %.2f\n", venda10);
    printf("Valor de cada parcela: %.2f\n", valorParc);
    printf("Comissao do vendedor em venda a vista: %.2f\n", comisVista);
    printf("Comissao do vendedor em venda parcelada: %.2f\n", comisParc);

    return 0;
}

