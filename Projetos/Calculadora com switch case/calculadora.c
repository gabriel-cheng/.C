//CALCULADORA EM C USANDO SWITCH CASE

#include <stdio.h>
#include <stdlib.h>

int main() {
    float uservalue, uservalue2, soma;
    char operacao;

    printf("Operacoes..: Soma: (+), Subtracao: (-), ");
    printf("Divisao: (/), Multiplicacao: (*)\n");
    
    printf("\nOperador..: ");
    scanf("%c", &operacao);

    printf("\nInforme o primeiro valor...: ");
    scanf("%d", &uservalue);    
    

    printf("Informe o segundo valor...: ");
    scanf("%d", &uservalue2);

    switch (operacao) {
    case '+': //Verificar diferença de aspas duplas e aspas simples
        soma = (uservalue + uservalue2);
        printf("\nValor...: %.2f", soma);
        printf("\n ");
        break;
        
    case '-':
        soma = (uservalue - uservalue2);
        printf("\nValor...: %.2f", soma);
        printf("\n ");
        break;
        
    case '/':
        soma = (uservalue / uservalue2);
        printf("\nValor...: %.2f", soma);
        printf("\n ");
        break;
        
    case '*':
        soma = (uservalue * uservalue2);
        printf("\nValor...: %.2f", soma);
        printf("\n ");
        break;    

    default:
        printf("\nOperador invalido!");
        printf("\n ");
        break;
    }
}