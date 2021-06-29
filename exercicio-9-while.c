#include <stdio.h>
#include <stdlib.h>

int main(void) {

    long unsigned dimensao, grao = 0, quadro = 1, i = 1;

    printf("\nInforme a dimensao do tabuleiro: ");
    scanf("%lu", &dimensao);

    while (i <= (dimensao * dimensao)) {

      grao += quadro;
      quadro *= 2;
      i++;

    }

    printf("\nTotal de graos: %lu\n\n", grao);

    return 0;

}
