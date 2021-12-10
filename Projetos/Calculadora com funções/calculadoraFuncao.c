//A IDEIA É CRIAR UMA CALCULADORA UTILIZANDO FUNÇÕES

#include <stdio.h>
#include <stdlib.h>

//SESSÃO DE FUNÇÕES

void pausar() { //Função de pausar o sistema para teste de commit
    system("pause");
}

void limpatela() { //Função para limpar a tela
    system("cls");
    menu();
}

void adicao() { //Função de adição
    float uservalue1, uservalue2, soma;

    printf("\nInforme o primeiro valor..: ");
    scanf("%f", &uservalue1);
    printf("Informe o segundo valor..: ");
    scanf("%f", &uservalue2);
    
    soma = (uservalue1 + uservalue2);

    printf("\nA soma e..: %.2f\n\n", soma);
    system("pause");
    system("cls"); //Limpatela
    menu();
}

void subtracao() { //Função de subtração
    float uservalue1, uservalue2, soma;

    printf("\nInforme o primeiro valor..: ");
    scanf("%f", &uservalue1);
    printf("Informe o segundo valor..: ");
    scanf("%f", &uservalue2);

    soma = (uservalue1 - uservalue2);

    printf("\nA subtracao e...: %.2f\n\n", soma);
    system("pause");
    system("cls"); //Limpatela
    menu();
}

void divisao() { //Função de divisão
    float uservalue1, uservalue2, soma;

    printf("\nInforme o primeiro valor..: ");
    scanf("%f", &uservalue1);
    printf("Informe o segundo valor...: ");
    scanf("%f", &uservalue2);

    soma =  (uservalue1 / uservalue2);

    printf("\nA soma divisao e..: %.2f\n\n", soma);
    system("pause");
    system("cls"); //Limpatela
    menu();
}

void multiplicacao() { //Função de multiplicação
    float uservalue1, uservalue2, soma;

    printf("\nInforme o primeiro valor..: ");
    scanf("%f", &uservalue1);
    printf("Informe o segundo valor..: ");
    scanf("%f", &uservalue2);

    soma = (uservalue1 * uservalue2);

    printf("\nA multiplicacao e...: %.2f\n\n", soma);
    system("pause");
    system("cls"); //Limpatela
    menu();
}

void menu() { //Menu de interação com o usuário
    int escolha;

    printf("\nSeja bem-vindo(a) a minha calculadora.C!");

    printf("\n\nPrimeiramente, escolha uma operacao:");
    printf("\n   1. Adicao");
    printf("\n   2. Subtracao");
    printf("\n   3. Divisao");
    printf("\n   4. Multiplicacao");
    printf("\n   5. Limpatela");
    printf("\n   6. Sair");
    printf("\n\nEscolho...: ");
    scanf("%d", &escolha);

    switch (escolha)
    {
    case 1:
        printf("\nVoce escolheu adicao!\n");
        adicao();
    break;
    
    case 2:
        printf("\nVoce escolheu subtracao!\n");
        subtracao();
    break;
    
    case 3:
        printf("\nVoce escolheu divisao!\n");
        divisao();
    break;

    case 4:
        printf("\nVoce escolheu multiplicacao!\n");
        multiplicacao();
    break;

    case 5:
        limpatela();
    break;

    case 6:
        printf("\nObrigado por utilizar minha calculadora!\n\n");
        system("pause");
        system("exit"); //Fecha a calculadora
    break;

    default:
        printf("\n\nInforme uma operacao valida!\n\n");
        system("pause"); //Pause o sistema
        system("cls"); //Limpa o menu
        menu();
    break;
    }
}

//Corpo do programa

int main() {
    menu();
    system("cls");
    return 0;
}