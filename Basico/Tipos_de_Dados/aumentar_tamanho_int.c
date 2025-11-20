#include <stdio.h>
#include <stdlib.h>
// operador long para int
// %li / %ld
int main(){
    long long int x = 2147483647; //long e int,sem diferença
    printf("Tamanho de x em bytes: %d\n", sizeof x);
    printf("Valor de x: %lld\n", x); //long long int
    x++;
    printf("Valor de x: %lld\n", x);
    return 0;
}