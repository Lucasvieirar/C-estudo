#include <stdio.h>
// tamanho de um float 
// %f
int main() {
    
   float x = 3.1415;
   double y = 3.14155896587458962548; // maior precisão
   printf("Um float precisa de %d bytes de memoria.\n", sizeof(float));
   printf("\n");
   printf("Um double precisa de %d bytes de memoria.\n", sizeof y);

    return 0;
}