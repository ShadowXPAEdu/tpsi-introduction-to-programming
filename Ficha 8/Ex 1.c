#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#define N 3
#define C 20

void pedir(char n[][C]);
void printfinal(char n[][C], int *x);

int main() {
    setlocale(LC_ALL, "Portuguese");
    char nomes[N][C];
    int x[N], i;

    pedir(nomes);
    for(i = 0; i < N; i++) {
        x[i] = strlen(nomes[i]);
    }
    printfinal(nomes, x);

    return 0;
}

void pedir(char n[][C]) {
    int i;

    for(i = 0; i < N; i++) {
        printf("Introduza o %dº nome:\n > ", i+1);
        gets(n[i]);
    }
}

void printfinal(char n[][C], int *x) {
    int i;

    printf("\n\nNomes:\n\n");
    for(i = 0; i < N; i++) {
        puts(n[i]);
        printf("Tamanho: %d\n\n", x[i]);
    }
}
