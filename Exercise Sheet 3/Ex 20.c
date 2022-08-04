#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    float x, y, z;

    printf("Introduza o primeiro número:\n");
    scanf("%f", &x);
    printf("Introduza o segundo número:\n");
    scanf("%f", &y);

    z = x + y;

    if (z > 20.0f) {
        z+= 8;
    } else {
        z-= 5;
    }

    printf("O número é: %.2f\n", z);

    return 0;
}
