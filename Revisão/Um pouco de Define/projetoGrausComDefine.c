//UTILIZANDO DEFINE PARA DEFINIR VALORES CONSTANTES

#include <stdio.h>
#include <stdlib.h>

#define INICIO 0
#define FIM 50
//#define incremento 10
//Acima, foram criados valores constantes para ambas as três variáveis.
//Dica: sempre colocar nomes simbólicas (como nas constantes) com letras maiúsculas

int main() {

    int fahr;

    for (fahr = INICIO; fahr <= FIM; fahr++) {
        printf("%4.1d %6.1f\n" , fahr, (5.0/9.0) * (fahr - 32));
    }
}