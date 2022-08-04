#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    int num, i;
    setlocale(LC_ALL, "Portuguese");
    printf("Introduza um número positivo:\n");
    scanf("%d", &num);

    if (num > 0) {
        for (i = 0; i <= num*2; i++) {
           if (i % 2 != 0) {
                printf("Números ímpar: %d\n", i);
            } else {}
        }
    } else {
        printf("\nErro: Número negativo ou Zero (não há numeros ímpares)\n");
    }

    return 0;
}
