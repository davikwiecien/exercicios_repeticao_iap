/*
Implemente em linguagem C algoritmo que desenhe um triângulo na tela, o
tamanho do triângulo deve ser informado pelo usuário. Ex: Usuário digitou 5.
#
##
###
####
#####
*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {

    int tamanho, cont = 0;

    printf("\nInforme o tamanho do triangulo (de 1 a 100): ");
    scanf("%d", &tamanho);

    while ((tamanho < 1) || (tamanho > 100)) {

        if (cont == 0)

            printf("\n");

        printf("Tamanho invalido! Digite novamente: ");
        scanf("%d", &tamanho);

        cont++;

    }

    printf("\n");

    for (int i = 1; i <= tamanho; i++) {

        for (int j = 1; j <= i; j++)

            printf("#");

        printf("\n");

    }

    printf("\n");

    return 0;

}
