#include <stdio.h>
#include <stdlib.h>
/* 
    Decisão aninhadas


*/
int main() {
   int a;

   printf("\nDigite um valor: ");
   scanf("%d", &a);

    

   if(a < 0){
    printf("\nO numero é negativo");
   }
   else{
        if(a > 0){
            printf("\nO numero é positivo");
        } else
            printf("\nO numero é zero");
   }
   
   return 0;
}