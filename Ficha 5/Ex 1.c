#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void sppi(int *x, int *y);  // ISTO É UM PROTÓTIPO

int main() {
    setlocale(LC_ALL, "Portuguese");
    int s = 0, p = 0;  // num - Número introduzido s - Soma de pares p - Produto de ímpares

    sppi(&s, &p);

    printf("Soma de números pares: %d\nProduto de números ímpares: %d", s, p);

    return 0;
}

void sppi(int *x, int *y) {
    int num;

    printf("Introduza um número:\n");
    scanf("%d", &num);

    while (num > 0) {
        if (num % 2 == 0) { // Par
            (*x) += num;
        } else {            // Ímpar
            if (*y == 0) {
                *y = 1;
            } else {}
            (*y) *= num;
        }
        printf("Introduza um número:\n");
        scanf("%d", &num);
    }

}
