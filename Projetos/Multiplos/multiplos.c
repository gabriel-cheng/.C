//PROGRAMA QUE INFORMA OS MÚLTIPLOS DE 3 e 5

#include <stdio.h>
#include <stdlib.h>


void menu (){
    int escolha;

    printf("\nCALCULADORA DE MULTIPLOS DE 3 E 5\n");

    printf("\nEscolha uma opcao:");
    printf("\n   3. Multiplos de 3");
    printf("\n   5. Multiplos de 5");
    printf("\n   0. Sair");
    printf("\n\nEscolho...: ");    
    scanf("%d", &escolha);

    switch (escolha)
    {
    case 3:
        tres();
        pause();
        limpatela();
        menu();
    break;

    case 5:
        cinco();
        pause();
        limpatela();
        menu();
    break;

    case 0:
        sair();
    break;
    
    default:
        printf("\nValor invalido... digite outro.");
        pause();
        limpatela();
        menu();
    break;
    }
}


void sair(){
    system("exit");
}


void limpatela(){
    system("cls");
}


void pause(){
    system("pause");
}


void tres(){
    int limite;
    
    printf("\nInforme o limite...: ");
    scanf("%d", &limite);

    int i = 0;

    while (i <= limite){
        int soma = i * 3;
        printf("\n3 x %d = %d", i, soma);
        i += 1;
    }
    printf("\n\n");
}
    

void cinco(){
    int limite;
    
    printf("\nInforme o limite...: ");
    scanf("%d", &limite);

    int i = 0;

    while (i <= limite){
        int soma = i * 5;
        printf("\n5 x %d = %d", i, soma);
        i += 1;
    }
    printf("\n\n");
}


int main(){
    menu();

    return 0;
}

