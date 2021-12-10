//TESTANDO PONTOS FLUTUANTES

#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int divisao = 4/3;

    printf("%1.3f", divisao); //Entre aspas duplas, é informado como:
    //1 = quantidade de casa antes do ponto decimal
    //3 = quantidade de casas a direita do ponto decimal
    //%f é o tipo que será impresso (f de float)
}