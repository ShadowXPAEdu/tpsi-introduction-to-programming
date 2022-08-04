#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    float x, y;

    printf("Introduza um número:\n");
    scanf("%f", &x);

    if (x < 1) {
        y = x;
    } else if (x > 1) {
        y = pow(x, 2);
    } else {
        y = 0;
    }

    printf("O número é: %.2f\n", y);


    return 0;
}
