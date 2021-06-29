/*
Implemente em linguagem C algoritmo que calcule N! (fatorial de N), sendo que o
valor inteiro de N é fornecido pelo usuário. Sendo que:
a) 0! = 1, por definição; e
b) N! = 1 * 2 * 3 * ...* (N – 1) * N.
*/

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
