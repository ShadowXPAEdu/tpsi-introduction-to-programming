#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void as(int x);     // ISTO É UM PROTÓTIPO

int main() {
    setlocale(LC_ALL, "Portuguese");
    int n;

    do {
        printf("Introduza o tamanho do lado de um quadrado (1 a 20):\n");
        scanf("%d", &n);
    } while ((n <= 0) || (n > 20));

    as(n);

    return 0;
}

void as(int x) {
    int i, j;

    putchar('\n');
    putchar('\n');
    for (i = 1; i <= x; i++) {
        for (j = 1; j <= x; j++) {
            if (i == 1 || i == x) {
                printf("* ");
            } else {
                if (j == 1 || j == x) {
                printf("* ");
                } else {
                printf("  ");
                }
            }
        }
        putchar('\n');
    }
}
