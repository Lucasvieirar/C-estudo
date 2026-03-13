#include <stdio.h>
// tamanho de um float 
// %f
int main() {
    
   float x = 3.1415;
   
   printf("Um float precisa de %d bytes de memoria.\n", sizeof(float));
   printf("\n");
   printf("Um float precisa de %d bytes de memoria.\n", sizeof x);

    return 0;
}