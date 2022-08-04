#include <stdlib.h>
#include <stdio.h>
#define N 1000

void ler_fich(char *x);

int main() {

    ler_fich("imc.txt");

    return 0;
}

void ler_fich(char *x) {
    FILE *f1;
    char nome[N], ap[] = "(Abaixo do Peso)", pn[] = "(Peso Normal)", acp[] = "(Acima do Peso)", ogi[] = "(Obesidade grau I)", ogii[] = "(Obesidade grau II)", ogiii[] = "(Obesidade grau III)";
    float alt, peso, lex;

    f1 = fopen(x, "r");

    if (f1 == NULL) {
        printf("\n-\nErro no ficheiro!\n-\n");
        return;
    } else {}

    fscanf(f1, "%s %f %f", nome, &peso, &alt);
    while (feof(f1) == 0) {
        lex = (peso/(alt*alt));
        if (lex < 18.4f) {
            printf("%s tem um imc de %.2f %s\n", nome, lex, ap);
        } else if (lex < 24.9f) {
            printf("%s tem um imc de %.2f %s\n", nome, lex, pn);
        } else if (lex < 29.9f) {
            printf("%s tem um imc de %.2f %s\n", nome, lex, acp);
        } else if (lex < 34.9f) {
            printf("%s tem um imc de %.2f %s\n", nome, lex, ogi);
        } else if (lex < 39.9f) {
            printf("%s tem um imc de %.2f %s\n", nome, lex, ogii);
        } else {
            printf("%s tem um imc de %.2f %s\n", nome, lex, ogiii);
        }

        fscanf(f1, "%s %f %f", nome, &peso, &alt);
    }

    fclose(f1);
}
