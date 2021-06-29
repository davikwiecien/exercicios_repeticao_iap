/*
Implemente em linguagem C algoritmo que calcule e escreve a seguinte soma:
soma = 1/1 + 3/2 + 5/3 + 7/4 + ... + 99/50.
*/

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
