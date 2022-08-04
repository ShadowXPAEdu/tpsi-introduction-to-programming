#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    int h, m, s;
    setlocale(LC_ALL, "Portuguese");
    printf("Introduza horas, minutos e segundos:\n");
    scanf("%d %d %d", &h, &m, &s);
    s += (h*3600)+(m*60);
    printf("Passaram %d segundos", s);

    return 0;
}

