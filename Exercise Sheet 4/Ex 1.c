#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    int num;
    setlocale(LC_ALL, "Portuguese");

    do {
        printf("Introduza um número (Diferente de zero):\n");
        scanf("%d", &num);
        if (num != 0) {
            printf("\nO quadrado do número é: %d\n", num*num);
        } else {
        }
    } while (num != 0);

    return 0;
}
