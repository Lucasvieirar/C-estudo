#include <stdio.h>

int main() {
    char letra;
    
    printf("Digite um caracter: ");
    letra = fgetc(stdin);   // para arquivos, preciso espeficar o arquivo ou teclado
    printf("Caracter Lido: %c\n", letra);
    return 0;
}