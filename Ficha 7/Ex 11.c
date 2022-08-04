#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

void pedir(char *x);
void calc(char *x, float *y, float *z, float *w);
void printfinal(char *x, float y, float z, float w);

int main() {
    setlocale(LC_ALL, "Portuguese");
    char str1[100];
    float chars, vog = 0, media;

    pedir(str1);
    calc(str1, &chars, &vog, &media);
    printfinal(str1, chars, vog, media);

    return 0;
}

void pedir(char *x) {
    printf("Introduza o nome:\n > ");
    gets(x);
}

void calc(char *x, float *y, float *z, float *w) {
    int i;
    (*y) = strlen(x);

    for(i = 0; x[i] != '\0'; i++) {
        if (x[i] == 'a' || x[i] == 'e' || x[i] == 'i' || x[i] == 'o' || x[i] == 'u' || x[i] == 'A' || x[i] == 'E' || x[i] == 'I' || x[i] == 'O' || x[i] == 'U') {
            (*z)++;
        }
    }

    (*w) = (*z) / (*y);
}

void printfinal(char *x, float y, float z, float w) {
    printf("\n\n\n\n\nString: %s\nNúmero de carateres: %.0f\nNúmero de vogais: %.0f\nPercentagem das vogais em relação aos carateres: %.2f %%\n\n\n\n", x, y, z, w*100);
}


