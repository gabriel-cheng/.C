/*IMPRIMIR A TABELA DE CONVERSÃO FAHRENHEIT - CELSIUS*/

#include <stdio.h>
#include <stdlib.h>



int main() {
    int inicio, fim, increment;
    float fahr, celsius;

    inicio = 0; //Limite infeior da tabela
    fim = 300; //Limite superior
    increment = 20; //Incremento
    printf("  Fº    Cº\n");

    fahr = inicio;
    while (fahr <= fim) {
        celsius = (5.0/9.0) * (fahr - 32.0);
        printf("%4.0f %6.1f\n", fahr, celsius);
        fahr = fahr + increment;
    }
}
