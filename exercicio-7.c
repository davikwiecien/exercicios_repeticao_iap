#include <stdio.h>
#include <stdlib.h>

int main(void) {

    int base, expoente, potencia = 1;

    printf("\nInforme o valor da base: ");
    scanf("%d", &base);

    printf("Informe o valor do expoente: ");
    scanf("%d", &expoente);

    for (int i = 1; i <= expoente; i++) {

        potencia *= base;

    }

    printf("\n%d ^ %d: %d\n\n", base, expoente, potencia);

    return 0;

}
