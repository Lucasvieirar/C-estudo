#include <stdio.h>
#include <stdlib.h>
/* 
    Operador de negação

*/
int main() {
   int a;

   printf("\nDigite um valor: ");
   scanf("%d", &a);

   if(!(a < 0)){    //negando a expressão, troca os valores booleanos
    printf("\nO numero é negativo");
   }else{
    printf("\nO numero é positivo");
   }
   
   return 0;
}