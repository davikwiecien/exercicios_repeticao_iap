#include <stdio.h>
#include <stdlib.h>

int main(void) {

    int num, cont1, cont2, cont3, cont4;

    cont1 = cont2 = cont3 = cont4 = 0;

    printf("\nO programa ira encerrar ao digitar um numero negativo!\n");

    printf("\nDigite um numero: ");
    scanf("%d", &num);

    while (num >= 0) {

        if (num <= 25)

            cont1++;

        else if (num <= 50)

            cont2++;

        else if (num <= 75)

            cont3++;

        else

            cont4++;

        printf("Digite um numero: ");
        scanf("%d", &num);

    }

    printf("\n[0 - 25]: %d", cont1);
    printf("\n[26 - 50]: %d", cont2);
    printf("\n[51 - 75]: %d", cont3);
    printf("\n[76 - ∞]: %d\n\n", cont4);

    return 0;

}
