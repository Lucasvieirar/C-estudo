#include <stdio.h>
// tamanho de um float 
// %f
// double -> %lf
// long double -> %LF
// __mingw_printf(); // windows 
int main() {
    
   float x = 3.1415;
   double y = 3.14155896587458962548; // maior precisão
   long double w = 3.14155896587458962548;
   printf("Um float precisa de %d bytes de memoria.\n", sizeof(float));
   printf("\n");
   printf("Um double precisa de %d bytes de memoria.\n", sizeof y);
   printf("Valor de y: %.12lf\n", y);
   printf("==========");
   printf("\n");
   printf("Um long double precisa de %d bytes de memoria.\n", sizeof w);
   printf("Valor de w: %.10lf\n", w);
   
    printf("\n");
    printf("==========");
    printf("Para windows: ");
    __mingw_printf("Valor de y: %Lf\n", y);

    return 0;
}