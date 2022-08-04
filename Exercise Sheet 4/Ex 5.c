#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    float ex1, ex2, ex3, me, met, mea;   // exX - teste X ||| me - média de cada aluno ||| met - média total ||| mea - Média de cada aluno Acumuladora
    int a, r, alu, i, x;                 // a - Alunos Aprovados ||| r - Alunos Reprovados ||| alu - Número de alunos ||| x - Aluno número x
    printf("Introduza número de alunos:\n");
    scanf("%d", &alu);

    mea = 0;
    a = 0;
    r = 0;
    x = 1;
    for (i = 0; i < alu; i++) {
        printf("\nIntroduza a nota do teste 1 do %dº aluno\n", x);
        scanf("%f", &ex1);
        printf("\nIntroduza a nota do teste 2 do %dº aluno\n", x);
        scanf("%f", &ex2);
        printf("\nIntroduza a nota do teste 3 do %dº aluno\n", x);
        scanf("%f", &ex3);
        me = (ex1 + ex2 + ex3) / 3;
        printf("\nMédia: %.2f\n", me);
        mea += me;
        if (me >= 9.5f) {
            printf("\nAluno Aprovado!\n");
            a++;
        } else {
            printf("\nAluno Reprovado!\n");
            r++;
        }
        x++;
    }

    met = mea / alu;

    printf("\nMédia Total da Turma: %.2f\nNúmero de Alunos Aprovados: %d\nNúmero de Alunos Reprovados: %d\n", met, a, r);

    return 0;
}
