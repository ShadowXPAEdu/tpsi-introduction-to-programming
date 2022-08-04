#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void as(int b);     // ISTO É UM PROTÓTIPO

int main() {
    setlocale(LC_ALL, "Portuguese");
    int n;

    do {
        printf("Introduza um número (1 ~ 9):\n");
        scanf("%d", &n);
    } while (n <= 0 || n > 9);

    as(n);

    return 0;
}

void as(int b) {
    int x, y, p1 = b-1, p2 = b+1;

    putchar('\n');
    putchar('\n');
    for (x = 0; x < b; x++) {                                   // LINHAS
        for (y = 0; y < b*2; y++) {                             // COLUNAS
           if (y <= x+b && y >= -x+b) {                         // TRIANGULO
                if (y < b) {                                    // LADO ESQUERDO DO TRIANGULO
                    printf(" %d ", y-p1+x);
                } else {                                        // LADO DIREITO DO TRIANGULO
                    printf(" %d ", -y+p2+x);
                }
            } else {
                printf("   ");
            }
        }
        putchar('\n');
    }
}
