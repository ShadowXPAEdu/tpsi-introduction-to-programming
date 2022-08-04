#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    int n;
    printf("Introduza um número:\n");
    scanf("%d", &n);

    if (n%2 == 0) {
        printf("\nO número é par.\n");
    } else {
        printf("\nO número é ímpar.\n");
    }

    return 0;
}
