#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <string.h>
#define N 1000

void pedir_nomefich(char *x);
void le_ficheiro(char *x);

int main() {
    setlocale(LC_ALL, "Portuguese");
    char ficheiro[N];

    pedir_nomefich(ficheiro);
    le_ficheiro(ficheiro);

    system("PAUSE");

    return 0;
}

void pedir_nomefich(char *x) {
    printf("Introduza o nome do ficheiro.extenção:\n > ");
    gets(x);
}

void le_ficheiro(char *x) {
    FILE *f;
    char y[N];

    f = fopen(x, "r");

    if (f == NULL) {
        printf("\n\nErro no ficheiro!!\n\n\n");
    } else {
        putchar('\n');
        putchar('\n');
        printf("---------------------------------------------------\n");
        fgets(y, N-1, f);
        printf("%s", y);
        while (feof(f) == 0) {
            fgets(y, N-1, f);
            printf("%s", y);
        }
        putchar('\n');
        printf("---------------------------------------------------\n");
        putchar('\n');
        putchar('\n');
    }
    fclose(f);
}
