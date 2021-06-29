#include <stdio.h>
#include <stdlib.h>

int main(void) {

    int n, soma = 0, cont = 0;

    printf("\nInforme um numero inteiro e positivo: ");
    scanf("%d", &n);
    
    while (n < 0) {

        if (cont == 0)

            printf("\n");

        printf("Numero negativo informado! Digite novamente: ");
        scanf("%d", &n);

        cont++;

    }

    for (int i = 1; i < n; i++)

        if (n % i == 0)

            soma += i;
            
    if (n == 0)
    
        printf("\nO numero informado foi 0!\n\n");

    else if (soma == n)

        printf("\nO numero %d eh perfeito!\n\n", n);

    else

        printf("\nO numero %d nao eh perfeito!\n\n", n);

    return 0;

}
