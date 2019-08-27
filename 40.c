#include <stdio.h>

// Uma empresa contrata um encanador a R$ 30,00 por dia.
 //Fa�a um programa que solicite o n�mero de dias
 // trabalhados pelo encanador e imprima a quantia l�quida
 // que dever� ser paga, sabendo-se que s�o descontados
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
