//CONTADOR DE LINHAS
//DAR UM ENTER E ELE EXIBIRÁ QUANTAS LINHAS FORAM PULADAS

#include <stdio.h>
#include <stdlib.h>

int main() {
    int c, contador;

    contador = 0;
    while ((c = getchar()) != EOF){
        if ( c == '\n'){
            ++contador;
        }
        printf("%d\n", contador);
    }
}