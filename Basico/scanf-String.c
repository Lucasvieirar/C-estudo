#include <stdio.h>
#include <stdlib.h>
int main()
{
    char sexo = 's'; //atribuição de caracter
    
    printf("Valor da variavel sexo: %c\n", sexo);

    printf("Digite seu sexo: f, F, m ou M");
    scanf("%c", &sexo);

    printf("Vlor da variavel sexo: %c\n", sexo);
    
    return 0;
}
