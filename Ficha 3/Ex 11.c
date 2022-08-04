#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    int ma;
    float valor;
    setlocale(LC_ALL, "Portuguese");
    printf("Introduza o valor da divida inicial e meses de atraso:\n");
    scanf("%f %d", &valor, &ma);

    switch(ma) {
        case 0:
            break;
        case 1:
            valor = valor * 1.01;
            printf("A divida final é de: %.2f", valor);
            break;
        case 2:
            valor = valor * 1.02;
            printf("A divida final é de: %.2f", valor);
            break;
        case 3:
            valor = valor * 1.03;
            printf("A divida final é de: %.2f", valor);
            break;
        case 4:
            valor = valor * 1.04;
            printf("A divida final é de: %.2f", valor);
            break;
        case 5:
            valor = valor * 1.05;
            printf("A divida final é de: %.2f", valor);
            break;
        default:
            printf("Meses de atraso maior que 5!");
    }

    return 0;
}
