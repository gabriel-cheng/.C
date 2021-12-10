//BUBBLE SORT

#include <stdio.h>
#include <stdlib.h>

void main() {
    int total = 15;
    int array[] = {10, 15, 1, 2 ,3 , 6, 7, 8, 20, 14, 50};

    int i, j, swap;

    for (i = 0; i < total - 1; i++) {
        for (j = 0; j < total - i - 1; j++) {
            if (array[j] > array[j+1]) {
                swap = array[j];
                array[j] = array[j+1];
                array[j+1] = swap;
            }
        }
    }
    printf("\nOrdenado...: ");
    for (i = 0; i < total - 1; i++) {
        printf("%d, ", array[i]);
    }
    //printf("\n%d\n", array[i]);
}