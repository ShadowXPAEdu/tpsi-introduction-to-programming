#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <string.h>
#define N 100

typedef struct {
    char nome[N];
    int idade;
    float nota_mat;
    float nota_ip;
    float nota_pw;
    float media;
} Aluno;

void pedir(Aluno *x, int *a);
void calc(Aluno *x, float *m, int *a, int *r, int n);
void printfinal(Aluno *x, float m, int a, int r, int n);

int main() {
    setlocale(LC_ALL, "Portuguese");
    Aluno aluno[N];
    float mediat;
    int alu, apr = 0, rep = 0;

    pedir(aluno, &alu);
    calc(aluno, &mediat, &apr, &rep, alu);
    printfinal(aluno, mediat, apr, rep, alu);

    return 0;
}

void pedir(Aluno *x, int *a) {
    int i, n;

    do {
        printf("\nIntroduza o número de alunos na turma:\n > ");
        scanf("%d", &(*a));
    } while ((*a) < 0);

    for(i = 0; i < (*a); i++) {
        do {
        getchar();
        printf("\nIntroduza o nome do(a) %dº aluno(a):\n > ", i+1);
        gets(x[i].nome);
        n = strlen(x[i].nome);
        } while (n < 3);
        do {
            printf("\nIntroduza a idade do(a) aluno(a): ");
            puts(x[i].nome);
            printf(" > ");
            scanf("%d", &x[i].idade);
        } while (x[i].idade < 0 || x[i].idade > 100);
        do {
            printf("\nIntroduza a nota final da disciplina de Matemática -- Aluno(a): ");
            puts(x[i].nome);
            printf(" > ");
            scanf("%f", &x[i].nota_mat);
        } while (x[i].nota_mat < 0 || x[i].nota_mat > 20);
        do {
            printf("\nIntroduza a nota final da disciplina de Introdução à Programação -- Aluno(a): ");
            puts(x[i].nome);
            printf(" > ");
            scanf("%f", &x[i].nota_ip);
        } while (x[i].nota_ip < 0 || x[i].nota_ip > 20);
        do {
            printf("\nIntroduza a nota final da disciplina de Programação Web -- Aluno(a): ");
            puts(x[i].nome);
            printf(" > ");
            scanf("%f", &x[i].nota_pw);
        } while (x[i].nota_pw < 0 || x[i].nota_pw > 20);
    }
}

void calc(Aluno *x, float *m, int *a, int *r, int n) {
    int i;
    float acu = 0;

    for(i = 0; i < n; i++) {
        x[i].media = (x[i].nota_mat + x[i].nota_ip + x[i].nota_pw) / 3;
        acu += x[i].media;
        if (x[i].media >= 9.5f) {
            (*a)++;
        } else {
            (*r)++;
        }
    }

    (*m) = (acu / n);
}

void printfinal(Aluno *x, float m, int a, int r, int n) {
    int i;

    system("CLS");

    for(i = 0; i < n; i++) {
        printf("------------------------------------------------\nAluno: ");
        puts(x[i].nome);
        printf("------------------------------------------------\n\nIdade: %d\nNota da disciplina - Matemática: %.2f\nNota da disciplina - Introdução à Programação: %.2f\nNota da disciplina - Programação Web: %.2f\nMédia: %.2f\n", x[i].idade, x[i].nota_mat, x[i].nota_ip, x[i].nota_pw, x[i].media);
        printf("\n------------------------------------------------\n\n");
    }
    printf("------------------------------------------------\n\nAlunos na Turma: %d\nMédia da turma: %.2f\nNº de alunos aprovados: %d\nNº de alunos reprovados: %d\n\n\n\n\n", n, m, a, r);
}
