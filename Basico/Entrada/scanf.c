#include <stdio.h>
#include <stdlib.h>

int main(){
int valor; // declaração de variavel do tipo inteiro
int valor2;

valor2 = 10; // atribuição da minha variavel valor

printf("Digite um valor inteiro: ");
scanf("%d", &valor); //Função que ler o que o usuario digita
// & onde ele vai salvar a variavel no endereço de menoria 

printf("\n\nValor da variavel dinanmica: %d", valor);

printf("\n\nValor da variavel fixa: %d", valor2);
    return 0;
}