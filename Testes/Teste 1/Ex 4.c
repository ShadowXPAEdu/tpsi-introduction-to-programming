#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    char csdv;

    do {
    printf("\nIntroduza o seu estado civil (Letra maiúscula):\nC- Casado(a)\nS- Solteiro(a)\nD- Divorciado(a)\nV- Viúvo(a)\n");
    scanf("%c", &csdv);
    getchar();

    switch (csdv) {
        case 'C':
            printf("\nEstado civil: Casado(a).\n");
            break;
        case 'S':
            printf("\nEstado civil: Solteiro(a).\n");
            break;
        case 'D':
            printf("\nEstado civil: Divorciado(a).\n");
            break;
        case 'V':
            printf("\nEstado civil: Viúvo(a).\n");
            break;
        default:
            printf("\nEstado civil inválido!\n");
    }
    } while (csdv != 'C' && csdv != 'S' && csdv != 'D' && csdv != 'V');

    return 0;
}
