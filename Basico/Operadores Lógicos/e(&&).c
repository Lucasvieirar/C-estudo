#include <stdio.h>
#include <stdlib.h>
/* 
    Operador de e(&&)


*/
int main() {
   int idade;
   char sexo;

   printf("\nDigite seu sexo (f ou m) e idade: ");
   scanf("%c%d", &sexo, &idade);

  if(sexo == 'm' && idade == 18){
    
        printf("Alistamento obrigatorio\n");
        
  }else{
    printf("Dispensado\n");
  }

   
   return 0;
}