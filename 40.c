#include <stdio.h>

// Uma empresa contrata um encanador a R$ 30,00 por dia.
 //Faça um programa que solicite o número de dias
 // trabalhados pelo encanador e imprima a quantia líquida
 // que deverá ser paga, sabendo-se que são descontados
 // 8% para imposto de renda.

float netSalary(int days);

int main(){

    int dias;
    float salLiq;

    printf("Informe o numero de dias trabalhados: ");
    scanf("%d", &dias);

    salLiq = netSalary(dias);

    printf("Salario liquido: %.2f\n", salLiq);

    return 0;
}

float netSalary(int days){

    const float dailyWage = 30.00;
    const float tax = 0.08;
    float netSal;

    netSal = days * dailyWage;
    netSal = netSal - (netSal * tax);

    return netSal;
}
