#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    float lab, ei, ef, me;
    char nome[1000];
    setlocale(LC_ALL, "Portuguese");

    printf("Introduza o nome:\n");
    scanf("%s", &nome);
    printf("Introduza a nota de Lab:\n");
    scanf("%f", &lab);
    printf("Introduza a nota de Exame Inter:\n");
    scanf("%f", &ei);
    printf("Introduza a nota de Exame Final:\n");
    scanf("%f", &ef);

    me = (lab*0.2)+(ei*0.3)+(ef*0.5);

    printf("Nome: %s\nLab: %.2f\nExame Inter: %.2f\nExame Final: %.2f\nMédia: %.2f", nome, lab, ei, ef, me);

    if (me <= 9.0f) {
        printf("\nO aluno está REPROVADO!\n");
    } else if (me < 9.5f) {
        printf("\nO aluno está em RECUPERAÇÃO!\n");
    } else {
        printf("\nO aluno está APROVADO!\n");
    }

    return 0;
}
