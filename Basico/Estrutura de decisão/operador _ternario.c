#include <stdio.h>
#include <stdlib.h>
/* 
    Operador ternario
    
    Condição ? verdadiro : falso

*/
int main() {
   int a;

   printf("\nDigite um valor: ");
   scanf("%d", &a);

   
   a < 0 ? printf("\nO numero é negativo\n") :  printf("\nO numero é positivo\n");
   
   
   return 0;
}