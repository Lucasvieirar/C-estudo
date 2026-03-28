#include <stdio.h>
#include <stdlib.h>
/*

Uma empresa contrata um encanador a R$ 45,00 por dia. Faça um programa que solicite o
número de dias trabalhados pelo encanador e imprima a quantia líquida que deverá ser paga,
sabendo que são descontados 8% para imposto de renda.
*/



int main() {
   float dias, valor, desconto;

    printf("Digite os dias trabalhados: ");
    scanf("f", &dias);

    valor = dias *45;
    desconto = valor * 8/100;
    valor = valor - desconto;

    printf("O pagamento será %f\n", valor);

    return 0;
}