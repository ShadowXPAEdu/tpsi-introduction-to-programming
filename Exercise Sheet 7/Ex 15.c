#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#define N 10

void pedir(int *x, int *y);
int diff(int *x, int *y);
void parimpar(int *x, int *y);
void ordenar(int *x, int *y);
void printfinal(int *x, int *y, int *z, int *a, int d);

int main() {
    setlocale(LC_ALL, "Portuguese");
    int a[N], mM[2], pi[2] = {0, 0}, na[N], d;

    pedir(a, mM);
    d = diff(a, mM);
    parimpar(a, pi);
    ordenar(a, na);
    printfinal(a, mM, pi, na, d);

    return 0;
}

void pedir(int *x, int *y) {
    int i;
    for(i = 0; i < N; i++) {
        printf("Introduza o %dº número:\n > ", i+1);
        scanf("%d", &x[i]);
    }

    y[0] = x[0];
    y[1] = x[0];
}

int diff(int *x, int *y) {
    int i;

    for(i = 1; i < N; i++) {
        if (y[0] > x[i]) {
            y[0] = x[i];
        } else {}
        if (y[1] < x[i]) {
            y[1] = x[i];
        } else {}
    }

    return y[1] - y[0];
}

void parimpar(int *x, int *y) {
    int i;

    for(i = 0; i < N; i++) {
        if (x[i]%2 == 0) {
            y[0]++;
        } else {
            y[1]++;
        }
    }
}

void ordenar(int *x, int *y) {
    int k, i, j, aux;

    for(k = 0; k < N; k++) {
        y[k] = x[k];
    }
// FIX
    for(i = 0; i <= N; i++) {
        aux = x[i];
        for (j = 0; j <= N; j++) {
            if (x[j] < aux) {
                y[i] = x[j];
                aux = x[j];
            } else {}
        }
    }
// --
}

void printfinal(int *x, int *y, int *z, int *a, int d) {
    int i;

    printf("\n\nArray:");
    for(i = 0; i < N; i++) {
        printf(" %d,", x[i]);
    }
    putchar('\n');
    printf("\nMenor número: %d\nMaior número: %d\nDifferença do Maior com o Menor número: %d\nNúmero de números pares: %d\nNúmero de números ímpares: %d\n\nNovo array:", y[0], y[1], d, z[0], z[1]);
    for(i = 0; i < N; i++) {
        printf(" %d,", a[i]);
    }
    putchar('\n');
    putchar('\n');
    putchar('\n');
    putchar('\n');
}
