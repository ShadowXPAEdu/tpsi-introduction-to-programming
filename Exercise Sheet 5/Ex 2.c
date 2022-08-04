#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    int i, x, y, z;

    for (i = 2000; i <= 9999; i++) {

        x = i / 100.0f;
        y = i % 100;
        z = x + y;
        if (z*z == i) {
            printf("\n%d + %d = %d\n%d^2 = %d\n", x, y, z, z, i);
        } else {}

    }

    return 0;
}
