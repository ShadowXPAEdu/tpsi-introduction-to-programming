#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <string.h>
#define N 1000

int main() {
    setlocale(LC_ALL, "Portuguese");

    FILE *f;
    int c;

    if ((f = fopen("texto_introduzido.txt", "w")) == NULL) {
        printf("Erro no ficheiro!\n\n\n");
        return 22;
    }

    while((c = getchar()) != EOF) {
        fputc(c, f);
    }

    if (ferror(f)) {
        printf("Erro ao escrever no ficheiro!\n\n\n");
        return 14;
    }

    fclose(f);

    return 0;
}
