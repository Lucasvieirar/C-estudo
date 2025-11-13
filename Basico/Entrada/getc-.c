#include <stdio.h>

int main() {
    char letra;
    
    printf("Digite um caracter: ");
    letra = getc(stdin); //escolho a entrada, no caso escolhi o teclado
    printf("Caracter lido: %c\n", letra); //tudo sera lido como caracter
    return 0;
}