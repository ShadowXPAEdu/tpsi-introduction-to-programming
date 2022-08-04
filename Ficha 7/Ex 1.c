#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void troca(int *x, int *y);

int main() {
    setlocale(LC_ALL, "Portuguese");
    int n1, n2;

    printf("Introduza o 1º número:\n");
    scanf("%d", &n1);
    printf("Introduza o 2º número:\n");
    scanf("%d", &n2);

    troca(&n1, &n2);

    printf("\n\n%d + %d = %d\n\n\n", n1, n2, n1+n2);

    return 0;
}

void troca(int *x, int *y) {
    int a;

    a = (*x);
    (*x) = (*y);
    (*y) = a;
}
