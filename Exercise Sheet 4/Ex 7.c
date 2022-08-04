#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    int i, n;
    printf("Introduza um número:\n");
    scanf("%d", &n);

    for (i = 1; i < n; i++) {
        if (n%i == 0) {
            printf("\n%d é um divisor do número %d\n", i, n);
        } else {
        }
    }

    return 0;
}
