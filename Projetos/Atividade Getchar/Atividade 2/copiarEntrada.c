//ESCREVA UM PROGRAMA QUE COPIE SUA ENTRADA NA SAÍDA, TROCANDO CADA CADEIA DE DOIS OU MAIS
//ESPAÇOS POR UM ÚNICO ESPAÇO

#include <stdio.h>
#include <stdlib.h>

int main(){
    int input;

    input = getchar();

    while (input != EOF){
        putchar(input);
        input = getchar();
    }    
}