/*
João foi desafiado por seu irmão, José. O desafio era calcular quantos grãos de
arroz são possíveis colocar em um tabuleiro de xadrez de dimensão N x N (o
usuário deve informar a dimensão do tabuleiro), de tal forma que o primeiro quadro
contivesse apenas um grão e os quadros subsequentes, o dobro do quadro
anterior. Implemente em linguagem C, algoritmo que exiba para o usuário a
quantidade de grãos em cada quadro e a quantidade total de grãos no tabuleiro.
Exemplo: Tabuleiro 2 x 2; Total de grãos é 15;
*/

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
