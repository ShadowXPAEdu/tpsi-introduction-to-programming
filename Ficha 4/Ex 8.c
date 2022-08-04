#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    char nome[100];
    int a = 0, x, i;
    printf("Introduza um nome (máximo 100 caracteres):\n");
    scanf("%s", &nome);

    x = strlen(nome);

    for (i = 0; i < x; i++) {
        if (nome[i] == 'a' || nome[i] == 'A') {
            a++;
        } else {
        }
    }

    printf("\nA letra 'A' apareceu %d vezes.\n", a);

    return 0;
}
