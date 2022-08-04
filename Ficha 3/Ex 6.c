#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    int age;
    printf("Introduza sua idade:\n");
    scanf("%d", &age);


    printf("Categoria: ");
    if (age >= 10 && age <= 14) {
        printf("Infantil.\n");
    } else if (age >= 15 && age <= 17) {
        printf("Juvenil.\n");
    } else if (age >= 18 && age <= 25) {
        printf("Adulto.\n");
    } else {
        printf("Não defenida!\n");
    }

    return 0;
}
