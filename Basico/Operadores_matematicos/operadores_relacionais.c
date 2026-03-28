#include <stdio.h>
#include <stdlib.h>
/*

        (a < b)
        (a > b)
        (a <= b)
        (a >= b)
        (a == b)
        (a != b)

*/



int main() {
   int x = 10, y = 20;
    
    printf("\n\tResultado: %d\n\n", x < y);
    printf("\n\tResultado: %d\n\n", x > y);
    printf("\n\tResultado: %d\n\n", x == y);
    printf("\n\tResultado: %d\n\n", x != y);
    return 0;
}