#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <string.h>
#define N 5

void pedir(int *x);
void guardar_fich(char *x, int *a);

int main() {
    setlocale(LC_ALL, "Portuguese");
    int a[N];

    pedir(a);
    guardar_fich("numeros_inteiros.dat", a);

    return 0;
}

void pedir(int *x) {
    int i;

    for (i = 0; i < N; i++) {
        printf("Introduza o %dº número:\n > ", i+1);
        scanf("%d", &x[i]);
    }
}

void guardar_fich(char *x, int *a) {
    FILE *f1;

    f1 = fopen(x, "wb");

    if (f1 == NULL) {
        printf("Erro no ficheiro!\n\n");
    } else {
        fwrite(a, sizeof(int), N, f1);
    }
    fclose(f1);
}
