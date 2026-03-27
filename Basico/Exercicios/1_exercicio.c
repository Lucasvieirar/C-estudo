/*
tElabore um algoritmo que receba, por meio do teclado, dois valores, um para a variável “a” e um
para a variável “b”. Em seguida, faça os passos que julgar necessário para que ao final, a variável
“a” possua o valor que inicialmente estava em “b” e a variável “b” possua o valor que inicialmente
estava em “a”. Traduza seu algoritmo para a linguagem C e exiba os valores na tela.
*/
#include <stdio.h>


    


int main() {
    int a, b, c;
    
    printf("Digite o valor de A: ");
    scanf("%d", &a);
    printf("O valor de A é: %d\n", a);
    printf("\n");

    printf("Digite o valor de B: ");
    scanf("%d", &b);
    printf("O valor de B é: %d\n", b);
    printf("\n");


    c = a;
    a = b;
    b = c; 
    printf("Depois da troca:\n");
    printf("O valor de A agora é  %d\n: ", a);
    printf("O valor de B agora é  %d\n: ", b);


   
   
   return 0;
}