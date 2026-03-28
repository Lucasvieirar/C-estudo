#include <stdio.h>
/*

Escreva um programa que leia um valor de despesa de restaurante, o valor da gorjeta (em
porcentagem) e o número de pessoas para dividir a conta. Imprima o valor que cada um deve pagar.
Assuma que a conta será dividida igualmente.
*/



int main() {
    int pessoas;
    float despesa, gorjeta, valor, valorPessoa;

    printf("Digite o valor da despesa: ");
    scanf("%f", &despesa);

    printf("\n");

    printf("Digite o valor da gorjeta (%%): ");
    scanf("%f", &gorjeta);

    printf("\n");

    printf("Digite o numero de pessoas: ");
    scanf("%d", &pessoas);

    printf("\n");

    valor = despesa + (despesa * gorjeta / 100);

    valorPessoa = valor / pessoas;

    printf("O valor individual é: %.2f\n", valorPessoa);

    return 0;
}