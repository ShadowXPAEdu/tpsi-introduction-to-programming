#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {
    setlocale(LC_ALL, "Portuguese");
    int x, y, z; // x - sala y - capacidade z - alunos

    do {
        printf("Introduza o número da sala de aula:\n");
        scanf("%d", &x);
    } while (x < 0);
    do {
        printf("Introduza a capacidade da sala de aula:\n");
        scanf("%d", &y);
    } while (y <= 0);
    do {
        printf("Introduza o número de alunos:\n");
        scanf("%d", &z);
    } while (z <= 0);

    if (z < y) {
        printf("Sala: %d\nCapacidade: %d\nAlunos: %d\nCadeiras ocupadas: %d\nCadeiras livres: %d\nA sala não está lotada.\n", x, y, z, z, (y - z));
    } else if (z > y) {
        printf("Sala: %d\nCapacidade: %d\nAlunos: %d\nCadeiras ocupadas: %d\nAlunos sem cadeira: %d\nA sala está lotada.\n", x, y, z, y, (z - y));
    } else {
        printf("Sala: %d\nCapacidade: %d\nAlunos: %d\nCadeiras ocupadas: %d\nA sala está lotada.\n", x, y, z, y);
    }

    return 0;
}
