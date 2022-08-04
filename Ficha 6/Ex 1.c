#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void maior(int x, int *y);

int main() {
    setlocale(LC_ALL, "Portuguese");
    int n, m, i = 1;

    do {
        printf("\nIntroduza o %dº número:\n", i);
        scanf("%d", &n);
        if (i == 1) {
            m = n;
        } else {
            maior(n, &m);
        }
        i++;
    } while (i < 4);

    printf("\nO maior número é: %d\n", m);

    return 0;
}

void maior(int x, int *y) {
    if ((*y) < x) {
        (*y) = x;
    }
}
