#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void pedir(int *x, float *y);
void calc(int x, float y, float *z);
void printfinal(int x, float y, float z);

int main() {
    setlocale(LC_ALL, "Portuguese");
    int h;
    float cur, valfinal;

    pedir(&h, &cur);
    calc(h, cur, &valfinal);
    printfinal(h, cur, valfinal);

    return 0;
}

void pedir(int *x, float *y) {
    do {
        printf("Introduza o número de horas:\n > ");
        scanf("%d", &(*x));
    } while ((*x) < 0 || (*x) > 128);
    do {
        printf("Introduza o valor de cada hora:\n > ");
        scanf("%f", &(*y));
    } while ((*y) < 0);
}

void calc(int x, float y, float *z) {
    if (x <= 40) {
        (*z) = x * y;
    } else if (x <= 60) {
        (*z) = (40 * y) + ((x - 40) * y)*1.5f;
    } else {
        (*z) = (60 * y) + ((x - 60) * y)*2.0f;
    }
}

void printfinal(int x, float y, float z) {
    printf("Número de horas: %d\nValor por hora: %.2f EUR\nValor por semana: %.2f", x, y, z);
}
