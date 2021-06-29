#include <stdio.h>
#include <stdlib.h>

int main(void) {

   double soma = 0.0;
   int i = 1, j = 1;

    while (i <= 50) {

        soma += (double) j / i;

        i++;
        j += 2;

    }

    printf("\nSoma: %f\n\n", soma);

    return 0;

}
