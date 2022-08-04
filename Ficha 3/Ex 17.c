#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    float salb, totved;

    do {
        printf("Introduza o salário base:\n");
        scanf("%f", &salb);
    }while (salb < 0);
    printf("Introduza o seu total de vendas:\n");
    scanf("%f", &totved);

    if (totved > 1000) {
        salb *= 1.2;
    } else {}

    printf("\nSalário final: %.2f €\n", salb);

    return 0;
}
