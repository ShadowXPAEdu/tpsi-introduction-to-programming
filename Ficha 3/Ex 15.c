#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    float sal;

    printf("Introduza salário:\n");
    scanf("%f", &sal);

    if (sal < 400) {
        sal+= 100;
    } else {
    }

    printf("O seu salário é: %.2f €", sal);

    return 0;
}
