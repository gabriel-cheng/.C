#include <stdio.h>

#define TAM 3

int main(){

    int vet[TAM], i, maior, maiorPos; //Criando um vetor
    int menor, menorPos;

    //Preenche o vetor
    for (i = 0; i < TAM; i++) {
        printf("Informe um valor para o vetor...: ");
        scanf("%i", &vet[i]);
    } 

    //Printa o vetor
    printf("\nVetor...: ");
    for (i = 0; i < TAM; i++) {
        printf("%i ", vet[i]);
    }

    //Encontrar o maior valor
    maior = vet[0];
    maiorPos = 0;

    for (i = 1; i < TAM; i++) {
        if ( vet[i] > maior) {
            maior = vet[i];
            maiorPos = i;
        }
    }

    //Informa o maior valor
    printf("\n\nMaior valor...: %i - Posicao...: %i", maior, maiorPos+1);

    //Encontra o menor valor

    menor = vet[0];
    menorPos = 0;

    for (i = 1; i < TAM; i++) {
        if ( vet[i] < menor) {
            menor = vet[i];
            menorPos = i;
        }
    }

    //Informa o menor valor
    printf("\nMenor valor...: %i - Posicao...: %i", menor, menorPos+1);
    printf("\n ");

    return 0;
}