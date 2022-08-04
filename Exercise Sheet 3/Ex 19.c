#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    int p;
    float peso, peso2;

    do {
        printf("Introduza o Peso (kg):\n");
        scanf("%f", &peso);
    } while (peso <= 0);
    do {
        printf("Introduza o número de um planeta (1-7):\n");
        scanf("%d", &p);
    } while (p < 1 && p > 7);

    switch (p) {
        case 1:
            peso2 = peso * 0.376;
            break;
        case 2:
            peso2 = peso * 0.903;
            break;
        case 3:
            peso2 = peso * 0.380;
            break;
        case 4:
            peso2 = peso * 2.340;
            break;
        case 5:
            peso2 = peso * 1.160;
            break;
        case 6:
            peso2 = peso * 1.150;
            break;
        case 7:
            peso2 = peso * 1.190;
            break;
        default:;
    }

    printf("Peso na Terra: %.2f kg\nPeso no Planeta: %.2f kg", peso, peso2);


    return 0;
}
