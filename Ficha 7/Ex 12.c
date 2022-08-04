#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#define N 8

void pedir(int *x);
void calc(int *x, int *y, int *z);
void printfinal(int *x, int y, int *z);

int main() {
    setlocale(LC_ALL, "Portuguese");
    int x[N], num, pos[N], i;

    for(i = 0; i < N; i++) {
        pos[i] = -1;
    }

    pedir(x);
    calc(x, &num, pos);
    printfinal(x, num, pos);

    return 0;
}

void pedir(int *x) {
    int i;
    for(i = 0; i < N; i++) {
        printf("Introduza o %dº número:\n > ", i+1);
        scanf("%d", &x[i]);
    }
}

void calc(int *x, int *y, int *z) {
    int i, j;

    printf("\n\nIntroduza um número:\n > ");
    scanf("%d", &(*y));

    for(i = 0, j = 0; i < N; i++) {
        if (x[i] == (*y)) {
            z[j] = i+1;
            j++;
        } else {}
    }
}

void printfinal(int *x, int y, int *z) {
    int i;

    for(i = 0; i < N; i++) {
        if(z[0] < 0) {
            printf("O número não existe no array.");
            break;
        } else if (z[i] >= 0) {
            printf("\nA posição %d tem o número %d!\n", z[i], y);
        } else {}
    }
}
