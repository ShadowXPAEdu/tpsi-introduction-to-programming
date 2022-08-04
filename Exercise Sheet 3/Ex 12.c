#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    int num;
    setlocale(LC_ALL, "Portuguese");
    printf("Introduza o número do mês:\n");
    scanf("%d", &num);

    switch(num) {
        case 1:
            printf("%d curresponde ao mês de Janeiro", num);
            break;
        case 2:
            printf("%d curresponde ao mês de Fevereiro", num);
            break;
        case 3:
            printf("%d curresponde ao mês de Março", num);
            break;
        case 4:
            printf("%d curresponde ao mês de Abril", num);
            break;
        case 5:
            printf("%d curresponde ao mês de Maio", num);
            break;
        case 6:
            printf("%d curresponde ao mês de Junho", num);
            break;
        case 7:
            printf("%d curresponde ao mês de Julho", num);
            break;
        case 8:
            printf("%d curresponde ao mês de Agosto", num);
            break;
        case 9:
            printf("%d curresponde ao mês de Setembro", num);
            break;
        case 10:
            printf("%d curresponde ao mês de Outubro", num);
            break;
        case 11:
            printf("%d curresponde ao mês de Novembro", num);
            break;
        case 12:
            printf("%d curresponde ao mês de Dezembro", num);
            break;
        default:
            printf("Erro: O número não curresponde a um mês");
    }

    return 0;
}
