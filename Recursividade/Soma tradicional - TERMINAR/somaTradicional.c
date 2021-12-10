//TERMINAR DEPOIS

#include <stdio.h>
#include <stdlib.h>

int main() {
    int uservalue, i, soma;

    printf("\nInsira um valor inteiro...: ");
    scanf("%d", &uservalue);

    while (i <= uservalue) {
        soma = soma + i;
        i = i + 1;
    }
    printf("\nValor final...: %d", soma);
    printf("\n ");

    return 0;
}