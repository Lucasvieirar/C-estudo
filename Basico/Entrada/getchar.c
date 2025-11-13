#include <stdio.h>
#include <stdlib.h>

int main(){
char letra;
printf("Digite uma letra: ");
letra = getchar(); // retornar o caracter do buffer do teclado
 
printf("Caracter lido: %c\n", letra);                    // preciso da variavel letra para ele pegar o caracter e retornar
    return 0;
}