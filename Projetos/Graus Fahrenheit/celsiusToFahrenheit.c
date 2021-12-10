//CONVERSOR DE GRAUS CELSIUS PARA FAHRENHEIT

#include <stdio.h>
#include <stdlib.h>

int main() {
    int inicioTabela, fimTabela, incrementoWhile;
    float celsius, fahr;

    inicioTabela = 0; //Começa em ...graus
    fimTabela = 400; //Termina em ...graus
    incrementoWhile = 10; //"De quantos em quantos até o final?"

    celsius = inicioTabela;

    printf("   Cº     Fº\n");
    while (celsius <= fimTabela) {
        fahr = ((9.0/5.0) * celsius) + 32;
        printf("%4.0f |-%6.1f\n", celsius, fahr);
        celsius = celsius + incrementoWhile;
    }
}