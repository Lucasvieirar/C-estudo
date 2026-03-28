#include <stdio.h>
#include <stdlib.h>
/* 
Faça um programa em C para trocar o valor de duas variáveis inteiras sem utilizar nenhuma
variável auxiliar.

*/
int main() {
    int a, b;
    
    printf("Digite o valor de A: ");
    scanf("%d", &a);
    printf("O valor de A é: %d\n", a);
    printf("\n");

    printf("Digite o valor de B: ");
    scanf("%d", &b);
    printf("O valor de B é: %d\n", b);
    printf("\n");


    a  = b + a;
    b = a - b;
    a = a - b;

    printf("Depois da troca:\n");
    printf("O valor de A agora é  %d\n: ", a);
    printf("O valor de B agora é  %d\n: ", b);


   
   
   return 0;
}