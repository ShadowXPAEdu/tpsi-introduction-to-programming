#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define UM 0.145f   // TAXA - 14.5%
#define DOI 0.23f   // TAXA - 23%
#define TRE 0.29f   // TAXA - 29%
#define QUA 0.35f   // TAXA - 35%
#define CIN 0.37f   // TAXA - 37%
#define SEI 0.45f   // TAXA - 45%
#define SET 0.48f   // TAXA - 48%

int main() {
    setlocale(LC_ALL, "Portuguese");
    float sal, taxa, p = 0, r = 0; // sal - Salário taxa - Taxa de IRS p - valor a pagar r - valor a receber

    do {
        printf("Introduza o seu salário:\n");
        scanf("%f", &sal);
    } while (sal < 0);
    do {
        printf("Introduza taxa de imposto paga (%%):\n");
        scanf("%f", &taxa);
    } while (taxa < 0);

    taxa*= 0.01;

    if (sal < 7091.0f) {
        if (taxa > UM) {
            taxa-= UM;
            r = taxa * sal;
        } else if (taxa < UM) {
            taxa = UM - taxa;
            p = taxa * sal;
        } else {}
    } else if (sal < 10700.0f) {
        if (taxa > DOI) {
            taxa-= DOI;
            r = taxa * sal;
        } else if (taxa < DOI) {
            taxa = DOI - taxa;
            p = taxa * sal;
        } else {}
    } else if (sal < 20261.0f) {
        if (taxa > TRE) {
            taxa-= TRE;
            r = taxa * sal;
        } else if (taxa < TRE) {
            taxa = TRE - taxa;
            p = taxa * sal;
        } else {}
    } else if (sal < 25000.0f) {
        if (taxa > QUA) {
            taxa-= QUA;
            r = taxa * sal;
        } else if (taxa < QUA) {
            taxa = QUA - taxa;
            p = taxa * sal;
        } else {}
    } else if (sal < 36856.0f) {
        if (taxa > CIN) {
            taxa-= CIN;
            r = taxa * sal;
        } else if (taxa < CIN) {
            taxa = CIN - taxa;
            p = taxa * sal;
        } else {}
    } else if (sal < 80640.0f) {
        if (taxa > SEI) {
            taxa-= SEI;
            r = taxa * sal;
        } else if (taxa < SEI) {
            taxa = SEI - taxa;
            p = taxa * sal;
        } else {}
    } else {
        if (taxa > SET) {
            taxa-= SET;
            r = taxa * sal;
        } else if (taxa < SET) {
            taxa = SET - taxa;
            p = taxa * sal;
        } else {}
    }

    if (p > 0.0f) {
        printf("\nSalário: %.2f €\nO valor de IRS a pagar é: %.2f €\n", sal, p);
    } else if (r > 0.0f) {
        printf("\nSalário: %.2f €\nO valor de IRS a receber é: %.2f €\n", sal, r);
    } else {
        printf("Não têm valor a pagar ou receber.\n");
    }

    return 0;
}
