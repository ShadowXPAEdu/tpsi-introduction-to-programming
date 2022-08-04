#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define N 100

void pedir(int *x, int *y, int *z, char *s, int *w);
void calc(int x, int *w, int *h, int *hh, int *sh, int *ahf, int *m, int *awm, int *f, char *ml);
void printfinal(int x, int *age, int *we, int *he, int hhe, int she, int ahef, int m, int awem, int f, char *ml);

int main() {
    setlocale(LC_ALL, "Portuguese");
    int age[N], we[N], he[N], hhe = 0, she = 300, ahef = 0, m = 0, awem = 0, f = 0, gsize;       // Idade, Peso, Altura, Maior Altura, Menor Altura, Média Altura Mulheres, Número de homens, Média Peso homens, Número de mulheres
    char ml[N];

    pedir(age, we, he, ml, &gsize);
    calc(gsize, we, he, &hhe, &she, &ahef, &m, &awem, &f, ml);
    printfinal(gsize, age, we, he, hhe, she, ahef, m, awem, f, ml);

    system("PAUSE");
    return 0;
}

void pedir(int *x, int *y, int *z, char *s, int *w) {
    int i;

    do {
        printf("\tIntroduza o número de membros no grupo (Tamanho máximo %d membros):\n\t > ", N);
        scanf("%d", &(*w));
    } while ((*w) < 1 || (*w) > N);

    for (i = 0; i < (*w); i++) {
        do {
            printf("\n\tIntroduza a idade do %dº membro:\n\t > ", i+1);
            scanf("%d", &(x[i]));
        } while ((x[i]) < 1 || (x[i]) > 120);   // Min - 1 Max - 120
        do {
            printf("\n\tIntroduza o peso (g) do %dº membro:\n\t > ", i+1);
            scanf("%d", &(y[i]));
        } while ((y[i]) < 1 || (y[i]) > 40000); // Min - 1 g Max - 400 kg
        do {
            printf("\n\tIntroduza a altura (cm) do %dº membro:\n\t > ", i+1);
            scanf("%d", &(z[i]));
        } while ((z[i]) < 40 || (z[i]) > 250);  // Min - 40 cm Max - 2,5 m
        getchar();
        do {
            printf("\n\tIntroduza o sexo (M, F) do %dº membro:\n\t > ", i+1);
            scanf("%c", &(s[i]));
            getchar();
        } while (((s[i]) != 'M' && (s[i]) != 'm') && ((s[i]) != 'F' && (s[i]) != 'f'));
    }
}

void calc(int x, int *w, int *h, int *hh, int *sh, int *ahf, int *m, int *awm, int *f, char *ml) {
    int i;

    for (i = 0; i < x; i++) {

        // MAIOR E MENOR ALTURAS
        if ((h[i]) > (*hh)) {
            (*hh) = (h[i]);
        } else {}
        if ((h[i]) < (*sh)) {
            (*sh) = (h[i]);
        } else {}

        if ((ml[i] == 'M') || (ml[i] == 'm')) {
            // CONTA HOMENS + ACUMULA PESOS
            (*m)++;
            (*awm) += w[i];
            ml[i] = 'M';
        } else if ((ml[i] == 'F') || (ml[i] == 'f')) {
            // CONTA MULHERES + ACUMULA ALTURAS
            (*f)++;
            (*ahf) += h[i];
            ml[i] = 'F';
        } else {
            printf("Ocurreu um erro!\n\n\n\n");
            break;
        }
    }

    if ((*m) != 0) {
        (*awm) /= (*m);
    } else {}
    if ((*f) != 0) {
        (*ahf) /= (*f);
    }
}

void printfinal(int x, int *age, int *we, int *he, int hhe, int she, int ahef, int m, int awem, int f, char *ml) {
    int i;

    system("CLS");
    printf("\tTamanho do grupo: %d\n", x);
    printf("----------------------------------------\n");
    for (i = 0; i < x; i++) {
        printf("\n\tIdade: %d\n", age[i]);
        printf("\n\tPeso (kg): %.2f\n", (we[i])/100.0f);
        printf("\n\tAltura (m): %.2f\n", (he[i])/100.0f);
        printf("\n\tM/F: %c\n", ml[i]);
        printf("\n----------------------------------------\n");
    }
    printf("\n\tMaior altura (m): %.2f\n", hhe/100.0f);
    printf("\n\tMenor altura (m): %.2f\n", she/100.0f);
    printf("\n\tMédia de altura de Mulheres (m): %.2f\n", ahef/100.0f);
    printf("\n\tMédia de peso de Homens (kg): %.2f\n", awem/100.0f);
    printf("\n\tNúmero de Homens: %d\n", m);
    printf("\n\tNúmero de Mulheres: %d\n\n\n\n", f);
}
