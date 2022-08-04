#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

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
    int i;
    putchar('\n');
    for(i = 0; i < 4; i++) {
        printf("%c", x[i]);
    }
    putchar('\n');
}
