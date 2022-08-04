#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void as(int x);     // ISTO É UM PROTÓTIPO
void t(int b);

int main() {
    setlocale(LC_ALL, "Portuguese");
    int n;

    do {
        printf("Introduza o número de ramos (Maior que 1):\n");
        scanf("%d", &n);
    } while (n <= 1);

    //as(n);

    t(n);

    putchar('\n');
    putchar('\n');
    system("PAUSE");
    return 0;
}

//PRIMEIRO TESTE

/*
void as(int x) {                                                // ISTO DEU MUITO TRABALHO!! MAS FUNCIONA!
    int i, j;

    putchar('\n');
    putchar('\n');
    for (i = 0; i < x+3; i++) {                                 // LINHAS
        for (j = 1; j < x*2; j++) {                             // COLUNAS
            if ((i+x >= j) && (x-i <= j)) {                     // DUAS RETAS Y = X+B --- INT I = X | INT X = B | INT J = Y
                if (!(i >= x)) {
                    printf(" * ");
                } else {
                    if (!(i == x+2) && j == x) {                // PARTE DE BAIXO DA ÁRVORE
                        printf(" * ");
                    } else if (i == x+2) {
                        if (j >= x-1 && j <= x+1) {
                            printf(" * ");
                        } else {
                            printf("   ");
                        }
                    } else {
                        printf("   ");
                    }
                }                                               // FIM PARTE DE BAIXO DA ÁRVORE
            } else {
                printf("   ");
            }
        }
        putchar('\n');
    }
}
*/

// VERSÃO MELHORADA?

void t(int b) {
    int x, y, xz, yz;

    putchar('\n');
    putchar('\n');
    for (x = 0; x < b; x++) {
        for (y = 0; y < b*2; y++) {
            if ((y <= x+b) && (y >= -x+b)) {
                printf(" * ");
            } else {
                printf("   ");
            }
        }
        putchar('\n');
    }
    for (xz = 0; xz < 3; xz++) {
        for (yz = 0; yz <= b; yz++) {
            if (yz == b && xz != 2) {
                printf(" * ");
            } else if (yz == b-1 && xz == 2) {
                printf(" *  *  * ");
            } else {
                printf("   ");
            }
        }
        putchar('\n');
    }

}
