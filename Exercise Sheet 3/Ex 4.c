#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    float a, b, c;
    printf("Introduza 3 números (A, B, C):\n");
    scanf("%f %f %f", &a, &b, &c);

    if (a > b && a > c) {
        printf("\nO maior número é o primeiro número (A): %f\n", a);
    } else if (b > c) {
        printf("\nO maior número é o segundo número (B): %f\n", b);
    } else {
        printf("\nO maior número é o terceiro número (C): %f\n", c);
    }

    return 0;
}
