#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <string.h>
#define N 1000

void copia(char *x, char *y);

int main() {
    setlocale(LC_ALL,"Portuguese");

    copia("ficheiro_texto.txt", "ficheiro_texto_copia.txt");

    return 0;
}

void copia(char *x, char *y) {
    FILE *f1, *f2;
    char str[N];

    f1 = fopen(x, "r");
    f2 = fopen(y, "w");

    if (f1 == NULL || f2 == NULL) {
        printf("Erro no ficheiro!");
    } else {
        fgets(str, N, f1);
        fputs(str, f2);
        while (feof(f1) == 0) {
            fgets(str, N, f1);
            fputs(str, f2);
        }
    }

    fclose(f1);
    fclose(f2);
}
