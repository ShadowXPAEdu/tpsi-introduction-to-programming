#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    float sal, em, sal03, empr;
    int pr;
    printf("Introduza salário:\n");
    scanf("%f", &sal);
    sal03 = sal*0.3;
    printf("Introduza empréstimo:\n");
    scanf("%f", &em);
    printf("Introduza número de prestações:\n");
    scanf("%d", &pr);
    empr = em / pr;

    if (sal <= 0 || em <= 0 || pr <= 0) {
        printf("\nErro: Um dos dados introduzidos está inválido!\n");
    } else if (empr <= sal03) {
        printf("\nO empréstimo pode ser concedido.");
    } else {
        printf("\nO empréstimo não pode ser concedido.");
    }

    return 0;
}
