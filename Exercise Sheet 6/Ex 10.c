#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#define N 12

void pedir(int *x, int *y);
void calc(int x, int y, int *z);
void printfinal(char x[][N], int a, int d, int y);
void pr();

int main() {
    setlocale(LC_ALL, "Portuguese");
    int a, m, d;
    char mes[N][N] = {  {"Janeiro"},
                        {"Fevereiro"},
                        {"Março"},
                        {"Abril"},
                        {"Maio"},
                        {"Junho"},
                        {"Junlho"},
                        {"Agosto"},
                        {"Setembro"},
                        {"Outubro"},
                        {"Novembro"},
                        {"Dezembro"},
                    };

    pedir(&a, &m);
    calc(a, m, &d);
    printfinal(mes, a, d, m);

    system("PAUSE");
    return 0;
}

void pedir(int *x, int *y) {
    pr();
    do {
        printf("\tIntroduza o ano:\n\t > ");
        scanf("%d", &(*x));
    } while ((*x) < 0);
    do {
        printf("\tIntroduza o mês:\n\t > ");
        scanf("%d", &(*y));
    } while ((*y) < 1 || (*y) > 12);

}

void calc(int x, int y, int *z) {
    switch(y) {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            (*z) = 31;
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            (*z) = 30;
            break;
        case 2:
            (*z) = ((x%100 == 0 && x%400 == 0) || (x%100 != 0 && x%4 == 0)) ? 29 : 28;
            break;
        default:
            printf("Ocurreu um erro!\n\n\n\n");
    }
}

void printfinal(char x[][N], int a, int d, int y) {
    y--;
    system("CLS");
    pr();
    printf("\n## %s de %d tem %d dias ##\n\n\n\n", x[y], a, d);
}

void pr() {
    printf("******************* CÁLCULO DE DIAS *******************\n");
    printf("-------------------------------------------------------\n");
}
