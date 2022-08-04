#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void pedir(char *x);
void calc(char *x, char *y, int *z);
void printfinal(char *x, char *y, int z);

int main() {
    setlocale(LC_ALL, "Portuguese");
    char nome1[100], nome2[100];
    int cont = 0;

    pedir(nome1);
    calc(nome1, nome2, &cont);
    printfinal(nome1, nome2, cont);

    return 0;
}

void pedir(char *x) {
    printf("Introduza o nome:\n > ");
    gets(x);
}

void calc(char *x, char *y, int *z) {
    int i, j;

    for(i = 0, j = 0; x[i] != '\0'; i++) {
        if(!(x[i] == 'a' || x[i] == 'A')) {
            y[j] = x[i];
            j++;
        } else {
            (*z)++;
        }
    }
    y[j] = '\0';
}

void printfinal(char *x, char *y, int z) {
    printf("String 1: %s\nString 2: %s\nNúmero de 'A': %d\n\n\n\n", x, y, z);
}

