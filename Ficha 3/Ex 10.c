#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    char op;
    float num1, num2, res;
    setlocale(LC_ALL, "Portuguese");

    printf("Introduza o primeiro numero:\n");
    scanf("%f", &num1);
    getchar();
    printf("Introduza o operador (+, -, *, /):\n");
    scanf("%c", &op);
    printf("Introduza o segundo numero:\n");
    scanf("%f", &num2);


    switch (op) {
        case '+':
            res = num1 + num2;
            printf("%f %c %f = %f", num1, op, num2, res);
            break;
        case '-':
            res = num1 - num2;
            printf("%f %c %f = %f", num1, op, num2, res);
            break;
        case '*':
            res = num1 * num2;
            printf("%f %c %f = %f", num1, op, num2, res);
            break;
        case '/':
            if (num2 == 0) {
                printf("Impossível dividir por 0");
            } else {
                res = num1 / num2;
                printf("%f %c %f = %f", num1, op, num2, res);
            }
            break;
        default:
            printf("Erro de operação");
    }

    return 0;
}
