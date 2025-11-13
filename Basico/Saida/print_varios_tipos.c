#include <stdio.h>
#include <stdlib.h>

int main (){

    char sexo;
    int idade;
    float peso, altura;
    printf("Digite sexo (f, F, m ou M), idade, peso e altura:\n");
    scanf("%c %d %f %f", &sexo, &idade, &peso, &altura);
    //buffer do teclado-> armazena o que o usuario digitou 
    // adiciona espaço entre caracteres parfa limpar o buffer
    printf("Sexo: %c\nIdade: %d\nPeso: %.1f\nAltura: %2.f\n", sexo, idade, peso, altura);
    return 0;
}