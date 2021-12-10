//PROGRAMA QUE CONTA CARACTERES

#include <stdio.h>
#include <stdlib.h>

int main() {
    double contador;

    for (contador = 0; getchar() != EOF; ++contador){
        ;
        printf("%.0f\n", contador);
    }
    
    /*
    long contador;

    contador = 0;
    while (getchar() != EOF) {
        ++contador; //Incremento pré-fixado
        //contador++ //Incremento pós-fixado
    }
    printf("%.0f\n", contador);
    */
}