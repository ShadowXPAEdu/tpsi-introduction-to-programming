#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#define N 4

void pedir(int x[][N]);
void printfinal(int x[][N]);

int main() {
    setlocale(LC_ALL, "Portuguese");
    int a[N][N];

    pedir(a);
    printfinal(a);

    return 0;
}

void pedir(int x[][N]) {
    int i, j;

    for(i = 0; i < N; i++) {
        for(j = 0; j < N; j++) {
            printf("Introduza o %dº número da linha %d:\n > ", j+1, i+1);
            scanf("%d", &x[j][i]);
            putchar('\n');
        }
    }
}

void printfinal(int x[][N]) {
    int i, j, pa = 0, im = 0;

    for(i = 0; i < N; i++) {
        for(j = 0; j < N; j++) {
            printf("%d\t", x[j][i]);
        }
        putchar('\n');
    }
    printf("\n\nDiagonal principal:\n");
    for(i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            if (i = j) {
                printf(" %d,", x[j][i]);
            }
        }
    }
    printf("\n\nDiagonal secundária:\n");
    for(i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            if (i != j) {
                printf(" %d,", x[j][i]);
            }
        }
    }
    for(i = 0; i < N; i++) {
        for(j = 0; j < N; j++) {
            if (x[j][i]%2 == 0) {
                pa++;
            } else {
                im++;
            }
        }
    }
    printf("\n\nNúmero de pares:\n%d\n\nNúmero de ímpares\n%d\n\n\n\n", pa, im);
}
