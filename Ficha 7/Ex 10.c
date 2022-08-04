#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

void pedir(char *x);
void calc(char *x, char *y);
void printfinal(char *x, char *y);

int main() {
    setlocale(LC_ALL, "Portuguese");
    char str1[100], str2[100];

    pedir(str1);
    calc(str1, str2);
    printfinal(str1, str2);

    return 0;
}

void pedir(char *x) {
    printf("Introduza o nome:\n > ");
    gets(x);
}

void calc(char *x, char *y) {
    int i, j = strlen(x) - 1;

    for(i = 0; x[i] != '\0'; i++, j--) {
        y[j] = x[i];
    }
    y[i] = '\0';
}

void printfinal(char *x, char *y) {
    printf("\n\n\n\n\nString 1: %s\nString 2: %s\n\n\n\n\n", x, y);
}

