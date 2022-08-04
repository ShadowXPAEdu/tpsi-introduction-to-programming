#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#define N 4

void imprimir_matriz(int x[][N], int y, int z, int w);

int main() {
    setlocale(LC_ALL, "Portuguese");
    int a[N][N], i, j, mul_cinco = 0, maior_dez_menor_trinta = 0, maior;

    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            printf("Número da %dº linha e %dº coluna:\n > ", i+1, j+1);
            scanf("%d", &a[i][j]);
            if (i == 0 && j == 0) {
                maior = a[i][j];
            } else {}
            if (maior < a[i][j]) {
                maior = a[i][j];
            } else {}
            if (a[i][j] % 5 == 0) {
                mul_cinco++;
            } else {}
            if (a[i][j] >= 10 && a[i][j] <= 30) {
                maior_dez_menor_trinta++;
            } else {}
        }
    }

    imprimir_matriz(a, mul_cinco, maior_dez_menor_trinta, maior);

    return 0;
}

void imprimir_matriz(int x[][N], int y, int z, int w) {
    int i, j;

    for (i = 0; i < N; i++) {
        putchar('\t');
        for (j = 0; j < N; j++) {
            printf("%d\t", x[i][j]);
        }
        putchar('\n');
    }

    printf("\n\nNúmero de multiplos de 5: %d\nNúmeros maiores que 10 e menores que 30 (inclusive): %d\nMaior número: %d\n\n", y, z, w);
}
