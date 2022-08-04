#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void conv(float x, float *y, float *z, float *w);

int main() {
    setlocale(LC_ALL, "Portuguese");
    float m, dm, cm, mm;

    do {
        printf("Introduza uma medida (em metros):\n");
        scanf("%f", &m);
    } while (m <= 0);

    conv(m, &dm, &cm, &mm);

    printf("\nValores:\nMetro: %.2f\nDecímetro: %.2f\nCentímetro: %.2f\nMilímetro: %.2f\n\n", m, dm, cm, mm);

    return 0;
}

void conv(float x, float *y, float *z, float *w) {
    (*y) = x * 10;
    (*z) = x * 100;
    (*w) = x * 1000;
}
