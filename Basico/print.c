#include <stdio.h>
#include <stdlib.h>

int main(){
    // impirmir Mensagem na tela
    printf("Ola");
    // quebra de linha
    printf("\n\nOla, seja bem vindo!\n\n");

    //Menu
    printf("\n\n----------------------------------\n\n");
    printf("1 - Logar   2 - Cadastrar   3 - Imprimir\n");
    printf("\n----------------------------------\n");

    //printf é uma função que retorna um inteiro
    printf("\nValor retornado: %d", printf("Bom"));
    return 0;
}