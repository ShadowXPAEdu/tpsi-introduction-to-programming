#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void media(float x, float *y, int z, float *a);

int main() {
    setlocale(LC_ALL, "Portuguese");
    int i = 1;
    float n, m;
    float a = 0;

    do {
        printf("\nIntroduza o %dº número:\n", i);
        scanf("%f", &n);
        media(n, &m, i, &a);
        i++;
    } while (i < 3);

    printf("\nA média é: %.2f\n", m);

    return 0;
}

void media(float x, float *y, int z, float *a) {

    (*a) += x;
    if (z == 2) {
        (*y) = (*a)/z;
    }
}
