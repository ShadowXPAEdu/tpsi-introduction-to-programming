#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#define N 8

void pedir(int *x);
void calc(int *x, int *y, int *z, int *w);
void printfinal(int *x, int y, int z, int w);

int main() {
    setlocale(LC_ALL, "Portuguese");
    int x[N], cont = 0, a30 = 0, a = 0;

    pedir(x);
    calc(x, &cont, &a30, &a);
    printfinal(x, cont, a30, a);

    return 0;
}

void pedir(int *x) {
    int i;
    for(i = 0; i < N; i++) {
        printf("Introduza o %dº número:\n > ", i+1);
        scanf("%d", &x[i]);
    }
}

void calc(int *x, int *y, int *z, int *w) {
    int i;

    for(i = 0; i < N; i++) {
        (*w) += x[i];
        if (x[i] > 30) {
            (*y)++;
            (*z) += x[i];
        } else {}
    }
}

void printfinal(int *x, int y, int z, int w) {
    int i;

    printf("\nArray: ");
    for(i = 0; i < N; i++) {
        printf("%d ", x[i]);
    }
    printf("\nNúmero de números maiores que 30: %d\nSoma dos números maiores que 30: %d\nSoma de todos os números: %d\n\n", y, z, w);
}

