//TESTANDO CALCULADOR DE PERCENTUAL

#include <stdio.h>

void receber() {
    float uservalue1, uservalue2, percentual;

    printf("\nInforme o percentual...: ");
    printf("%%");
    scanf("%f", &uservalue1);
    printf("Informe o valor bruto R$...: ");
    printf("R$");
    scanf("%f", &uservalue2);

    percentual = ((uservalue1 / 100) * uservalue2);

    printf("\nO percentual equivale a..: R$%.2f", percentual);
}

int main() {
    printf("\nCALCULADOR DE PERCENTUAL\n");

    receber();

    return 0;
}