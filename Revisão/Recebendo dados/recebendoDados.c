//Revisão de receber dados
#include <stdio.h>
#include <stdlib.h>

int main(){
    //%c = carcteres
    //%d = números inteiros
    //%f = números do tipo float e double(decimais)
    
    int num1, num2, soma;

    printf("\nInforme um numero...: ");
    scanf("%d", &num1);

    printf("Informe o segundo numero...: ");
    scanf("%d", &num2);

    soma = num1 + num2;

    printf("\nPrimeiro valor informado: %d", num1);
    printf("\nSegundo valor informado: %d", num2);
    printf("\n\nA soma de ambos...: %d", soma);
    printf("\n ");

    return 0;
}