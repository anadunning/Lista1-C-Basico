#include <stdio.h>

// Implemente um programa que calcule o ano de nascimento de uma pessoa a partir de sua idade e do ano atual.

int calcAnoNasc(int idade);

int main(){

    int year = 2019;
    int age, birth;

    printf("Informe a idade: ");
    scanf("%d", &age);

    birth = calcAnoNasc(age);

    printf("Ano de nascimento: %d\n", birth);

    return 0;
}

int calcAnoNasc(int idade){

    int anoAtual = 2019;
    int anoNasc;

    anoNasc = anoAtual - idade;

    return anoNasc;
}
