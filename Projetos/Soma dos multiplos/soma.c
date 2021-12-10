//PROGRAMA QUE ENCONTRA A SOMA DE TODOS OS MÚLTIPLOS DE 3 OU 5 ATÉ 1000

void soma(limite){
    limite = 10;
    //int limite = 10;
    int multiplo3 = 0;
    int multiplo5 = 0;
    
    for (int i = 0; i <= limite; i++){
        if (i % 3 == 0){
            multiplo3 += i;
        }
        if ( i % 5 == 0){
            multiplo5 += i;
        }
    }

    int soma = (multiplo3 + multiplo5);

    printf("\nA soma e..: %d", soma);
    /*
    ESTA É A LÓGICA CUJA EU ESTAVA UTILIZANDO....

    int count = 0;
    int inicio = 3;
    int limite = 10;

    while (count <= limite){
        int soma = inicio * count;
        printf("\n%d x %d = %d", inicio, count, soma);
        count += 1;

        if (count == limite){
            printf("\n%d", soma);
        }
    }
    */
}


int main(){
    soma();

    return 0;
}