//SISTEMA QUE VERIFICA O LOGIN E SENHA DE UM USER

#include <stdio.h>

int main() {
    int user1, user2;

    printf("\nBEM-VINDO AO SISTEMA DE VERIFICACAO DE LOGIN/SENHA!\n");

    printf("\nInforme seu login...: ");
    scanf("%d", &user1);
    printf("\nInforme sua senha...: ");
    scanf("%d", &user2);

    if (user1 != 159){
        printf("\n\nLogin icorreto!");
    }
    else if (user1 == 159) {
        printf("\n\nLogin correto!");
    }
    if (user2 != 123) {
        printf("\nSenha icorreta!");
    }
    else if ( user2 == 123) {
        printf("\nSenha correta!");
    }
}