//CRIANDO PROJETO PARA TESTE DE GIT

#include <stdio.h>

void pausa() { //Função de soma
    system("pause");
}

void calcular() { //Função para receber valores e somar
    float uservalue1, uservalue2;

    printf("\nInforme o primeiro valor...: ");
    scanf("%f", &uservalue1);
    printf("Informe o segundo valor...: ");
    scanf("%f", &uservalue2);

     float soma = (uservalue1 + uservalue2);

     printf("\n\nA soma dos valores e...: %.2f", soma);
}

int main() {
    printf("\nBem-vindo ao meu somador!\n\n");
    pausa();
    calcular();

    return 0;
}