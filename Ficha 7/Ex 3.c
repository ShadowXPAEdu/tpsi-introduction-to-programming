#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void somsub(float x, float y, float *w, float *z);

int main() {
    setlocale(LC_ALL, "Portuguese");
    float som, sub, n1, n2;

    printf("Introduza o 1º número:\n");
    scanf("%f", &n1);
    printf("Introduza o 2º número:\n");
    scanf("%f", &n2);

    somsub(n1, n2, &som, &sub);

    printf("\n\n%.2f + %.2f = %.2f\n%.2f - %.2f = %.2f\n\n\n\n\n", n1, n2, som, n1, n2, sub);

    return 0;
}

void somsub(float x, float y, float *w, float *z) {
    (*w) = x + y;
    (*z) = x - y;
}
