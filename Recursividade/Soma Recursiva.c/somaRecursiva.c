#include <stdio.h>
#include <stdlib.h>

int recursive(int n) {
    if (n == 0) {
        return 0;
    }
    else{
        return n + recursive(n - 1);
    }
}

int main() {
    int uservalue;

    printf("\nInforme um valor inteiro...: ");
    scanf("%d", &uservalue);

    printf("\nValor da somatória recursiva...: %d", recursive(uservalue));
    printf("\n ");
    return 0;
}