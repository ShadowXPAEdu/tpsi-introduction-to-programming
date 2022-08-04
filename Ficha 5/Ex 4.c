#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void print(int z);

int main() {
    setlocale(LC_ALL, "Portuguese");
    int n, i;

    printf("Introduza um número:\n");
    scanf("%d", &n);

    print(100);
    for (i = 1; i <= 10; i++) {
        printf("\n%d\tx\t%d\t=\t%d\n", n, i, n*i);
    }
    print(100);

    return 0;
}

void print(int z) {
    int i;

    putchar('\n');
    for (i = 0; i < z; i++) {
        putchar('*');
    }
    putchar('\n');

}
