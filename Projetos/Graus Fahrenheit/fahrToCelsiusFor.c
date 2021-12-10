//TABELA DE CONVERSÃO USANDO LAÇO FOR

#include <stdio.h>
#include <stdlib.h>

int main() {
    int fahr;

    for (fahr = 50; fahr > 0; fahr--) { 
    //fahr inicia com valor 0;enquanto fahr for maior que 0;decremente 1
        printf("%4d %6.1f\n", fahr, (5.0/9.0) * (fahr - 32.0));
    }    
}