#include <stdio.h>

// Fa�a um programa que leia o valor da hora de trabalho (em reais)
// e n�mero de horas trabalhadas no m�s.
// Imprima o valor a ser pago ao funcion�rio,
// adicionando 10% sobre o valor calculado.

float salary2bPaid(float wage, int hours);

int main(){

    float valorHora, salario;
    int horas;

    printf("Informe o valor da hora de trabalho: ");
    scanf("%f", &valorHora);

    printf("Informe o numero de horas no mes: ");
    scanf("%d", &horas);

    salario = salary2bPaid(valorHora, horas);

    printf("Salario a receber: %.2f\n", salario);

    return 0;
}

float salary2bPaid(float wage, int hours){

    float salary;

    salary = wage * hours;
    salary = salary + (salary * 0.10);

    return salary;
}

