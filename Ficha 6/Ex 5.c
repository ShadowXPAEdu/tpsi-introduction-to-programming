#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

void menu(char *x);
void calcular(char x);
void ssm(double *x, double *y);
void d(double *x, double *y);

int main() {
    setlocale(LC_ALL, "Portuguese");
    char op;

    do {
    menu(&op);
    calcular(op);
    getchar();
    putchar('\n');
    system("PAUSE");
    system("CLS");
    } while (op != 'S' && op != 's');

    return 0;
}

void menu(char *x) {
    printf("********** CALCULADORA EM C *********\n\n");
    printf("----------------------------------\n");
    printf("Escolha uma das seguintes opções:\n");
    printf("----------------------------------\n");
    printf("[+] - Somar\n");
    printf("[-] - Subtrair\n");
    printf("[*] - Multiplicar\n");
    printf("[/] - Dividir\n");
    printf("[S] - Sair\n\n\n > ");
    scanf("%c", &(*x));
}

void calcular(char x) {
    double num1, num2;

    switch (x) {
        case '+':
            ssm(&num1, &num2);
            printf("\n%.22lf + %.22lf = %.22lf\n",num1, num2, num1 + num2);
            break;
        case '-':
            ssm(&num1, &num2);
            printf("\n%.22lf - %.22lf = %.22lf\n",num1, num2, num1 - num2);
            break;
        case '*':
            ssm(&num1, &num2);
            printf("\n%.22lf * %.22lf = %.22lf\n",num1, num2, num1 * num2);
            break;
        case '/':
            d(&num1, &num2);
            printf("\n%.22lf / %.22lf = %.22lf\n",num1, num2, num1 / num2);
            break;
        case 's':
        case 'S':
            break;
        default:
            printf("\nErro! Tente novamente!\n");
    }
}

void ssm(double *x, double *y) {
    printf("Introduza o primeiro número:\n > ");
    scanf("%lf", &(*x));
    printf("Introduza o segundo número:\n > ");
    scanf("%lf", &(*y));
}

void d(double *x, double *y) {
    printf("Introduza o primeiro número:\n > ");
    scanf("%lf", &(*x));
    do {
    printf("Introduza o segundo número:\n > ");
    scanf("%lf", &(*y));
    if ((*y) == 0) {
        printf("\nErro! Imposível dividir por 0!\n\n");
    }
    } while ((*y) == 0);
}
