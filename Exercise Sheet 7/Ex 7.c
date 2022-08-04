#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void pedir(char *x);
void printfinal(char *x);

int main() {
    setlocale(LC_ALL, "Portuguese");
    char nome[100];

    pedir(nome);
    printfinal(nome);

    return 0;
}

void pedir(char *x) {
    printf("Introduza o nome:\n > ");
    gets(x);
}

void printfinal(char *x) {
    int cont = 0, i;

    for(i = 0; x[i] != '\0'; i++) {
        if (x[i] == 'a' || x[i] == 'A') {
            cont++;
        }
    }

    printf("\n\nA letra 'A' foi introduzida %d vezes\n\n\n\n", cont);
}
