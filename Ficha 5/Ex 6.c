#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void as(int x);     // ISTO É UM PROTÓTIPO

int main() {
    setlocale(LC_ALL, "Portuguese");
    int n;

    do {
        printf("Introduza um número:\n");
        scanf("%d", &n);
    } while (n <= 0);

    as(n);

    return 0;
}

void as(int x) {
    int i, j;

    putchar('\n');
    putchar('\n');
    for (i = 1; i <= x; i++) {
        for (j = 0; j < x; j++) {
            printf(" %d ", i+j);
        }
        putchar('\n');
    }
}
