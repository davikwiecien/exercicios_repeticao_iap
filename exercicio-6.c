#include <stdio.h>
#include <stdlib.h>

int main(void) {

    int n, fat = 1;

    printf("\nInforme um numero para descobrir o seu fatorial: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)

        fat *= i;

    printf("\nFatorial de %d: %d\n\n", n, fat);

    return 0;

}
