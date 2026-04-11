#include <stdio.h>
#include <stdlib.h>
/* 
    Operador ternario Aninhado
    
   

*/
int main() {
   int a;

   printf("\nDigite um valor: ");
   scanf("%d", &a);

   
   a < 0 ? printf("\nO numero é negativo\n") :  
        a > 0 ? printf("\nO numero é positivo\n") :  printf("\nO numero é zero\n");
   
   
   return 0;
}