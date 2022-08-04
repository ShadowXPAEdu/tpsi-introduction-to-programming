#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    int ano;
    printf("Introduza um ano:\n");
    scanf("%d", &ano);

    if ((ano%100 == 0 && ano%400 == 0) || (ano%100 != 0 && ano%4 == 0)) {
        printf("\nO ano %d é um ano bissexto!\n", ano);
    } else {
        printf("\nO ano %d não é um ano bissexto!\n", ano);
    }

    return 0;
}
