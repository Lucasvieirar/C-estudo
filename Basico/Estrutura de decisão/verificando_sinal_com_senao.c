#include <stdio.h>
#include <stdlib.h>
/* 
    Verificando se é negativo


*/
int main() {
   int a;

   printf("\nDigite um valor: ");
   scanf("%d", &a);

    printf("\nResultado logico: %d\n", a < 0);

   if(a < 0){
    printf("\nO numero é negativo");
   }
   else{
    printf("\nO numero é positivo");
   }
   
   return 0;
}