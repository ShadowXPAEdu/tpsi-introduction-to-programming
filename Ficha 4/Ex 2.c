#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    int num, i, x = 0;
    setlocale(LC_ALL, "Portuguese");
    printf("Introduza um número positivo:\n");
    scanf("%d", &num);

    if (num > 0){
        for (i = 0; i <= num; i++) {
            x += i;
        }
        printf("\nNúmero: %d", x);
    } else {
        printf("\nNúmero negativo ou neutro!");
    }

    return 0;
}
