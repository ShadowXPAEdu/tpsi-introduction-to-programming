#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    int nc, tc;
    float eur, camc;

    do {
        printf("Introduza número de Cliente:\n");
        scanf("%d", &nc);
    } while (nc <= 0);
    do {
        printf("Introduza o consumo de água por metros cúbicos:\n");
        scanf("%f", &camc);
    } while (camc <= 0);
    do {
        printf("Introduza o tipo de consumidor:\n1- Residencial\n2- Comercial\n3- Industrial\n");
        scanf("%d", &tc);
    } while (tc < 1 || tc > 3);

    switch (tc) {
        case 1:
            eur = 5 + 2 * camc;
            break;
        case 2:
            if (camc <= 80) {
                eur = 100.0;
            } else {
                eur = 100 + 2.5 * (camc - 80);
            }
            break;
        case 3:
            if (camc <= 100) {
                eur = 150.0;
            } else {
                eur = 150 + 1.5 * (camc - 100);
            }
            break;
        default:
            printf("Erro!");
    }

    printf("\n\nCliente nº: %d\nTipo: %d\nConsumo: %.2f\nValor a pagar: %.2f EUR\n", nc, tc, camc, eur);

    return 0;
}
