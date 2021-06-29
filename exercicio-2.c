#include <stdio.h>
#include <stdlib.h>

int main(void) {

    printf("\nNumeros entre 1000 e 1999 que divididos por 11 dao resto 5:\n");

    for (int i = 1000; i <= 1999; i++)

        if (i % 11 == 5)

            printf("\n%d", i);

    printf("\n\n");

    return 0;

}
