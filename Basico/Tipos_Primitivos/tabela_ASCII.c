#include <stdio.h>
#include <stdlib.h>
#include<locale.h>

/* 
    Tabela acsii 
    1 byte(bits) -> -128 até 127
    unsigned 1 byte -> 0 até 255

    9 tabulação \t
    10 nova linha \n
    65 A
    66 B
    90 Z 
    
    1° setelocale(LC_ALL , NULL);
    2° setelocale(LC_ALL, "");
    3° setelocale(LC_ALL, "portuguese");
*/
int main() {
    
    char letra = 'f';
    printf("%d", letra);
    printf("\n");
    printf("%c", 103);
    printf("%c", 10); // \n

   setlocale(LC_ALL, "Portuguese"); // muda a saida para portuges no windows
   printf("coração");

   
   return 0;
}