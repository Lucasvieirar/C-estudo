#include <stdio.h>
#include <stdlib.h>
// operador short para tipo int
// -32.768 até 32.767
int main(){
    int y = 0;
    short int x = 32767;
    //sizeof é um constante
    printf("Tamanho de um int na menoria: %d bytes\n", sizeof y ); // variavel atribuida não é obrigado o uso de parentese
    printf("Tamanho de memoria de um short int: %d bytes \n", sizeof x); //saber o tamanho do meu tipo
    // short int ocupa metadade do int
    return 0;
}