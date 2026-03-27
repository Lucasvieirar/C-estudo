#include <stdio.h>
/* 
    Operador unsigned
    trcar o %d por %u
    limite para o tipo int: 2.147.483.647
    unisigned 4.294.967.295
    unisigned %u
*/
int main() {
    unsigned  int x = 2147483647; /// tira a parte negativa
    // 31 numero
    // 32-> sinal do numero 
    unsigned short int y = 55000;

    unsigned long int w = 3147483647; //%lu
    printf("\n\t%u\n\n", ++x);
    printf("\n\t%u\n\n", y);
    printf("\n\t%u\n\n", w);

   
   
   return 0;
}