#include <stdio.h>
#include <stdlib.h>

int main(void) {

    long unsigned dimensao, quadro = 1, grao = 0;

    printf("\nInforme a dimensao do tabuleiro: ");
    scanf("%lu", &dimensao);

    for (int i = 1; i <= (dimensao * dimensao); i++) {

        grao += quadro;
        quadro *= 2;

    }

    printf("\nTotal de graos: %lu\n\n", grao);

    return 0;

}
