#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    int x, y, i, j;


    do {
        printf("Introduza o número de colunas (x):\n");
        scanf("%d", &x);
    } while (x <= 0);
    do {
        printf("Introduza o número de linhas (y):\n");
        scanf("%d", &y);
    } while (y <= 0);


    putchar('\n');
    putchar('\n');
    for (i = 1; i <= y; i++) {
        for (j = 1; j <= x; j++) {
            printf("*\t");
        }
        putchar('\n');
    }

    return 0;
}
