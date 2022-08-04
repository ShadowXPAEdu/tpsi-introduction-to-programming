#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void valido();
void invalido();

int main() {
    setlocale(LC_ALL, "Portuguese");
    int dia, mes, ano, TF;  // TF 1 - TRUE 0 - FALSE

    do {
    printf("Introduza um dia:\n");
    scanf("%d", &dia);
    } while (dia <= 0 || dia > 31);
    do {
    printf("Introduza um mes:\n");
    scanf("%d", &mes);
    } while (mes <= 0 || mes > 12);
    do {
    printf("Introduza um ano (D.C.):\n");
    scanf("%d", &ano);
    } while (ano <= 0);

        switch(mes) {
        case 2:
            if ((ano%100 == 0 && ano%400 == 0) || (ano%100 != 0 && ano%4 == 0)) {
                if (dia > 29){
                    TF = 0;
                } else {
                    TF = 1;
                }
            } else {
                if (dia > 28) {
                    TF = 0;
                } else {
                    TF = 1;
                }
            }
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            if (dia > 30) {
                TF = 0;
            } else {
                TF = 1;
            }
            break;
        default:
            TF = 1;
    }

    if (TF == 1) {
        valido();
    } else {
        invalido();
    }

    return 0;
}

void valido() {
    printf("\n\nData válida!\n\n");
}

void invalido() {
    printf("\n\nData inválida!\n\n");
}
