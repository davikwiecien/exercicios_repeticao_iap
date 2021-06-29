/*
Implemente em linguagem C algoritmo que solicite um número inteiro, com base no
número fornecido pelo usuário mostre todas as tabuadas (1-10) começando da tabuada 1.
Exemplo: Usuário digitou 3;
*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {

    int num;

    printf("\nInforme um numero inteiro: ");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++) {

        for (int j = 1; j <= 10; j++)

            printf("\n%d X %d = %d", j, i, j * i);

        printf("\n");

    }

    printf("\n");

    return 0;

}
