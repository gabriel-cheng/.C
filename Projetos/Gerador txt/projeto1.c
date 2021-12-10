//Espelhando projetos do GitHub
//Programa que cria um arquivo de texto

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>


int main(){
    int quantidade, num, i;
    srand(time(NULL));

    do { //Loopin que faz com que o a pergunta retorne sempre que o usuário informar um número fora do interfvalo pedido
        printf("Digite uma potencia entre 3 e 10...: ");
        scanf("%d", &quantidade);

        if (quantidade <= 3 || quantidade >= 10) {
            printf("O número informado foge do intervalo pedido! \n");
        }
    } while (quantidade <= 3 || quantidade >= 10);

    FILE*fp;

    fp = fopen("arq.txt", "w");
    quantidade = pow(10, quantidade);

    for (i = 0; i < quantidade; i++) {
        num = (rand() * 2) / 2;
        fprintf("fp", "%d", num);
    }

    fclose(fp);

    return 0;
}