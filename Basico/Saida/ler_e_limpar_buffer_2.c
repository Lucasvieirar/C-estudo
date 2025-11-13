#include <stdio.h>
#include <stdlib.h>

int main (){

    char a, b;

    printf("Digite uma letra: ");
    scanf("%c", &a);

    scanf("%c"); //pega o buffer do teclado 
    
    printf("Digite uma letra: ");
    scanf("%c", &b);

    printf("Primeira letra: %c\nSegunda letra: %c\n", a, b);
    return 0;
}