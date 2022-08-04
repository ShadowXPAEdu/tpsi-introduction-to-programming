#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#define N 1000
#define M 5

typedef struct {
    int codigo;
    char nome[N];
    float preco;
} Produto;

void menu();
void print_tudo();

int main() {
    setlocale(LC_ALL, "Portuguese");

    print_tudo();

    return 0;
}

void menu() {
    printf("[1] - Imprimir lista com código, nome e preço de cada produto\n\n[2] - Consultar preço de um produdo através do seu código\n\n[3] - Sair do programa\n\n\n > ");
}

void print_tudo() {

    Produto pro[M];
    int i, op, cod, flag = 0;

    for (i = 0; i < M; i++) {
        printf("Introduza o código do %dº Produto:\n > ", i+1);
        scanf("%d", &pro[i].codigo);
        getchar();
        printf("Introduza o nome do %dº Produto:\n > ", i+1);
        gets(pro[i].nome);
        printf("Introduza o preço do %dº Produto:\n > ", i+1);
        scanf("%f", &pro[i].preco);
    }

    while (1) {
        system("CLS");
        menu();
        scanf("%d", &op);
        if (op == 1) {
            for (i = 0; i < M; i++) {
                printf("\nCódigo: %d - Nome: %s - Preço: %.2f\n", pro[i].codigo, pro[i].nome, pro[i].preco);
            }
            putchar('\n');
            putchar('\n');
            system("PAUSE");
        } else if (op == 2) {
            printf("\nIntroduza o código do produto:\n > ");
            scanf("%d", &cod);
            for (i = 0; i < M; i++) {
                if (cod == pro[i].codigo) {
                    printf("\nCódigo: %d - Nome: %s - Preço: %.2f\n\n", pro[i].codigo, pro[i].nome, pro[i].preco);
                    flag++;
                } else {}
            }
            if (flag == 0) {
                printf("\nErro no código!\n\n");
            } else {}
            flag = 0;
            system("PAUSE");
        } else if (op == 3) {
            break;
        } else {
            printf("\nErro número introduzido não válido!\n");
            system("PAUSE");
        }
    }
}

