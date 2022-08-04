#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

void intmont(float *x);                     // Introduzir o montante
void escopt(int *x, float y, int *z);       // Escolher opções
void printfinal(float x, int y, int z);     // Fazer print da opção escolhida
void error(int e);                          // Erros
void pr(int p);                             // Prints

int main() {
    setlocale(LC_ALL, "Portuguese");
    float currency;                         // Dinheiro
    int opcao, n;                           // Opção e Número de prestações

    intmont(&currency);
    escopt(&opcao, currency, &n);
    printfinal(currency, opcao, n);

    return 0;
}

void intmont(float *x) {
    printf("************* GESTÃO DE PAGAMENTOS *************\n");
    pr(2);
    printf("\nIntroduza o montante gasto pelo cliente em euros:\n");
    pr(2);
    pr(1);
    scanf("%f", &(*x));
}

void escopt(int *x, float y, int *z) {
    int seterror = -1;

    do {
    pr(2);
    printf("\nEscolha uma das opções de pagamento:\n");
    pr(2);
    printf("\n[1] - em dinheiro com 10%c de desconto\n", '\%');
    printf("[2] - em duas vezes (sem desconto)\n");
    printf("[3] - entre 3 e 10 prestações com 3%c de juros ao mês (apenas para compras superiores a 500 EUR)\n", '\%');
    pr(1);
    scanf("%d", &(*x));
    if ((y <= 500.0f && (*x) == 3)) {
        (*x) = 0;
        seterror = 1;                           // SET ERROR 1
    } else {}
    error(seterror);
    } while ((*x) < 1 || (*x) > 3);
    if ((*x) == 3) {
        do {
        printf("\nEscolha o número de prestações:\n");
        pr(1);
        scanf("%d", &(*z));
        } while ((*z) < 3 || (*z) > 10);
    } else {}
}

void printfinal(float x, int y, int z) {    // x - Dinheiro || y - opção || z - Número de prestações
    switch(y) {
        case 1:
            printf("\n## Escolheu pagar em dinheiro! Valor a pagar: %.2f euros! ##\n", x * 0.9f);
            break;
        case 2:
            printf("\n## Escolheu pagar em duas vezes! Valor a pagar: %.2f euros ## Valor de cada prestação: %.2f euros.", x, x / 2.0f);
            break;
        case 3:
            printf("\n## Escolheu pagar em %d prestações!\n## Valor total: %.2f euros ## Valor de cada prestação: %.2f euros", z, (x * ((0.03f * z) + 1.0f)), (x * ((0.03f * z) + 1.0f)) / z);
            break;
        default:
            printf("\n\n########## OCCOREU UM ERRO! ##########");
            return 22;
    }
    putchar('\n');
    putchar('\n');
}

void error(int e) {
    if (e == 0) {                           // ERRO 0
        pr(2);
        printf("\nErro! Tente novamente!\n");
        pr(2);
    } else if (e == 1) {                    // ERRO 1
        pr(2);
        printf("\nErro tente novamente! Valor da opção não corresponde ao valor do montante!\n");
        pr(2);
    } else {}
}

void pr(int p) {
    int i;

    if (p == 1) {
        printf("\n > ");
    } else if (p == 2) {
        putchar('\n');
        for (i = 0; i < 52; i++){
            putchar('-');
        }
        putchar('\n');
    }
}
