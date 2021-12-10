//CRIANDO FUNÇÃO DE INSERTION SORT


void sort(int array[], int n) { //Função que ordena elementos
    int i, elemento, j;
    for (i = 1; i < n; i++) {
        elemento = array[i];
        j = i - 1;
        array[j+1] = array[j];
        j = j-1;
    }
    array[j+1] = elemento;
}


void imprimir(int array[], int n) { //Funcão de imprimir
    for (int i = 0; i < n; i++) {
        printf("%d", array[i]);
    }
    printf("n");
}