#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <string.h>
#define N 5

void ler_fich(char *x);

int main() {
    setlocale(LC_ALL, "Portuguese");

    ler_fich("numeros_inteiros.dat");

    return 0;
}

void ler_fich(char *x) {
    FILE *f1;
    int a[N], i;

    f1 = fopen(x, "rb");

    if (f1 == NULL) {
        printf("Erro no ficheiro!\n\n");
    } else {
        fread(a, sizeof(int), N, f1);
        for (i = 0; i < N; i++) {
            printf("%d\n", a[i]);
        }
    }
    fclose(f1);
}
