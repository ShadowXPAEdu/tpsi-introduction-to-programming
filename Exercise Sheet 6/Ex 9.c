#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void pedirnum(int *x);
int impar(int x);
void printfinal(int x);

int main() {
    setlocale(LC_ALL, "Portuguese");
    int n, ip;

    system("CLS");
    pedirnum(&n);
    ip = impar(n);
    printfinal(ip);
    system("PAUSE");

    return 0;
}

void pedirnum(int *x) {
    printf("Introduza um número inteiro:\n > ");
    scanf("%d", &(*x));
}

int impar(int x) {
    return (x%2 != 0) ? 0 : 1;
}

void printfinal(int x) {
    switch(x) {
        case 0:
            printf("\nO número é ímpar.\n\n\n");
            break;
        case 1:
            printf("\nO número não é ímpar.\n\n\n");
            break;
        default:
            printf("Ocurreu um erro!\nTente novamente!\n\n\n");
            system("PAUSE");
            main();
    }
}
