#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define NOTAS 3                                     // MUDAR NÚMERO DE TESTES OU PROVAS

void recnotas(float x[], char *nome);
float calcmedia(float *x);
void printfinal(char *nome, float *x, float y);

int main() {
    setlocale(LC_ALL, "Portuguese");
    float not[NOTAS], media;
    char nome[122];

    recnotas(not, nome);
    media = calcmedia(not);
    printfinal(nome, not, media);

    return 0;
}

void recnotas(float x[], char *nome) {
    int i;

    printf("Introduza o nome do aluno(a):\n > ");
    gets(nome);

    for (i = 0; i < NOTAS; i++) {
        do {
            printf("\nIntroduza a %dº nota do aluno(a): %s\n > ", i+1, nome);
            scanf("%f", &x[i]);
            if (x[i] < 0 || x[i] > 20) {
                printf("\nErro! Nota inválida!\n\n");
            } else {}
        } while (x[i] < 0 || x[i] > 20);
    }
}

float calcmedia(float *x) {
    int i, a = 0;

    for (i = 0; i < NOTAS; i++) {
        a += x[i];
    }

    return a / NOTAS;
}

void printfinal(char *nome, float *x, float y) {
    int i;

    system("CLS");
    printf("Aluno: %s\n\n", nome);
    printf("Notas:\n");
    for (i = 0; i < NOTAS; i++) {
        printf("%dª Prova: %.2f\n", i+1, x[i]);
    }
    putchar('\n');
    printf("Média final: %.2f\n\n", y);
}
