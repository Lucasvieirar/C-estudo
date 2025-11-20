#include <stdio.h>
#include <stdlib.h>

int main(){
    float x = 1.0;
    
    printf("Tamanho de um int na menoria: %d bytes\n", sizeof x );
    printf("Tamanho de menoria de int: %d bytes \n", sizeof(int)); //saber o tamanho do meu tipo
    // 4 * 8 = 32
    return 0;
}