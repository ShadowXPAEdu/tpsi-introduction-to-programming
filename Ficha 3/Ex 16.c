#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    int h = 0, m = 0, s;

    do {
    printf("Introduza o número de segundos:\n");
    scanf("%d", &s);
    } while(s < 0);

    if (s >= 60) {
        m = s/60;
        s-=60*m;
        if (m >= 60) {
            h = m /60;
            m-=60*h;
        } else {}
    } else {}

    printf("\n(Hora:Minutos.Segundos):\n\n%d:%d.%d\n", h, m, s);

    return 0;
}
