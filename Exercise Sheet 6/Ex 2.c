#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void imprime(int x);

int main() {
    setlocale(LC_ALL, "Portuguese");
    int n;

    do {
        printf("Introduza um número:\n");
        scanf("%d", &n);
    } while (n <= 0);

    imprime(n);

    return 0;
}

void imprime(int x) {
    int i;

    for (i = 0; i < x; i++){
        printf("\nOlá Mundo!\n");
    }
}

