/*
Implemente em linguagem C algoritmo que seja capaz de obter o resultado de uma
exponenciação para qualquer base e expoente positivo inteiro fornecidos pelo
usuário. Sendo que:
a) Quando o expoente for igual a um positivo, a potência será o próprio número da
base; e
b) Se o expoente for 0, a reposta referente à potência sempre será 1.
*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {

    int base, expoente, potencia = 1;

    printf("\nInforme o valor da base: ");
    scanf("%d", &base);

    printf("Informe o valor do expoente: ");
    scanf("%d", &expoente);

    for (int i = 1; i <= expoente; i++) {

        potencia *= base;

    }

    printf("\n%d ^ %d: %d\n\n", base, expoente, potencia);

    return 0;

}
