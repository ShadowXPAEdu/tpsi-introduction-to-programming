#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void as(int x);

int main() {
    setlocale(LC_ALL, "Portuguese");
    int n;

    do {
        printf("Introduza um número:\n");
        scanf("%d", &n);
    } while (n <= 0);

    as(n);

    return 0;
}

void as(int x) {
    int i, j;


    putchar('\n');
    putchar('\n');
    for(i = 0; i < x; i++)
    {
        for(j = 0; j <= i; j++)
        {
            printf(" * ");
        }
        putchar('\n');
    }
}
