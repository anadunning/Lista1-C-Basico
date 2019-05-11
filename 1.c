#include <stdio.h>

void printInt(int a);

int main(){

    int x;

    printf("Informe um numero inteiro: ");
    scanf("%d", &x);

    printInt(x);

    return 0;
}

void printInt(int a){

    printf("\nO numero inteiro informado foi : %d\n", a);

}
