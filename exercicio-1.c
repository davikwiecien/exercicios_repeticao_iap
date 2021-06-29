#include <stdio.h>
#include <stdlib.h>

int main(void) {

    int valor, maior, menor;
    
    printf("\nCalculo do maior e menor valor!\n\n");

    for (int i = 1; i <= 15; i++) {

        printf("Informe o %dº valor: ", i);
        scanf("%d", &valor);

        if (i == 1) {

            maior = valor;
            menor = valor;

        }

        else if (valor > maior)

            maior = valor;

        else if (valor < menor)

            menor = valor;

    }

    printf("\nMaior valor: %d", maior);
    printf("\nMenor valor: %d\n\n", menor);

    return 0;

}
