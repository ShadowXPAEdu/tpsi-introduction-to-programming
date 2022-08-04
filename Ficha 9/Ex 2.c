//	---------------------------------------------------------------------------------------------------------------
//	--																											 --
//	--											CÓDIGO INACABADO!												 --
//	--																											 --
//	---------------------------------------------------------------------------------------------------------------

#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <string.h>
#define N 100

typedef struct {
    char nome[N];
    int nif, password;
    float currency;
} Conta;

void menu(Conta *x;);
void criar_conta(Conta *x);
void manejar_conta();
void levantamentos_depositos();
void prints();
void printmenu(int *x, Conta *y);

int main() {
    setlocale(LC_ALL, "Portuguese");
    Conta conta_bancaria[N];

    menu(conta_bancaria);

    return 0;
}

void menu(Conta *x) {
    int opcao, i;

    printmenu(&opcao, &(*x));
}

void printmenu(int *x, Conta *y) {
    int q = 0;

    do {
        puts("\t###########################################################################################");
        puts("\t######################################## Banco Ex2 ########################################");
        puts("\t###########################################################################################");
        puts("\t\t[1] - Criar Conta");
        puts("\t\t[2] - Entrar na Conta");
        scanf("%d", &(*x));
        switch ((*x)) {
            case 1:
                criar_conta(&(*y));
                q++;
                break;
            case 2:
             //   manejar_conta();
                q++;
                break;
            default:
                system("CLS");
                puts("Erro!\n");
        }
    } while(q == 0);
}

void criar_conta(Conta *x) {
    int i, n;

    for(i = 0; i < N; i++) {
        if (strlen(x[i].nome) == 0) {
            do {
                getchar();
                puts("Introduza o Nome:");
                gets(x[i].nome);
                n = strlen(x[i].nome);
            } while (n < 3);
            do {
                puts("Introduza o NIF:");
                scanf("%d", &x[i].nif);
            } while (x[i].nif < 100000000 || x[i].nif > 999999999);
            do {
                puts("Introduza uma Password:");
                scanf("%d", &x[i].password);
            } while (x[i].password < 1000 || x[i].password > 9999);
            do {
                puts("Introduza um depósito inicial:");
                scanf("%f", &x[i].currency);
            } while (x[i].currency < 100.0f);
            break;
        } else {}
    }
    puts(x[i].nome);
    printf("%d\n", x[i].nif);
    printf("%d\n", x[i].password);
}

