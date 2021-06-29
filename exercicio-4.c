/*
Dado um número n inteiro e positivo, dizemos que n é perfeito se n for igual à soma
de seus divisores positivos diferentes de n e maior que zero. Implemente em
linguagem C, algoritmo que verifique se um dado número é perfeito.
Ex: 6 é perfeito.
6 (resto da divisão por) 1 = 0; (Ok)
6 (resto da divisão por) 2 = 0; (Ok)
6 (resto da divisão por) 3 = 0; (Ok)
6 (resto da divisão por) 4 = 2; (não Ok)
6 (resto da divisão por) 5 = 1; (não Ok)
1 + 2 + 3 = 6 (perfeito)
*/

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
