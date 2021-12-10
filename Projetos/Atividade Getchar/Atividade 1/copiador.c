//ATIVIDADE CONTADOR DE CARACTER, ESPAÇO E NOVA LINHA

#include <stdio.h>
#include <stdlib.h>

int main(){
    double c, contador;
    
    while ((c = getchar()) != EOF){
        if (c == '\n') {
            ++contador;
        }
        else{
            for (contador = 0; getchar() != EOF; ++contador){
                ;
                printf("%.0f\n", contador);
        }
        printf("%d", contador);
        }
    }
}