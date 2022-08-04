#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    float c,f;

    printf("Introduza a temperatura em Celsius: ");
    scanf("%f", &c);

    f = c * 1.8 + 32;

    printf("\nA temperatura em Fahrenheit é: %.2f\n", f);

    return 0;
}
