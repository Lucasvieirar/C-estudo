#include <stdio.h>
#include <stdlib.h>

int main (){

    char a, b;

    printf("Digite duas letras: ");
    scanf("%c %c", &a, &b); // se não tiver espaço entre %c o enter vai pro buffer como \n
    printf("Primeira letra: %c\nSegunda letra: %c\n", a, b);
    //fflush(); não é recomendado para limpeza, só funciona no windows
    return 0;
}