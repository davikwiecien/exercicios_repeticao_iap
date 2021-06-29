#include <stdio.h>
#include <stdlib.h>

int main(void) {

   double soma = 0.0;

    for (int i = 1, j = 1; i <= 50; i++, j += 2)

        soma += (double) j / i;

    printf("\nSoma: %f\n\n", soma);

    return 0;

}
