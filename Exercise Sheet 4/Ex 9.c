#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    char string[100];
    int i, x, y = 0;
    printf("Introduza uma palavra:\n");
    scanf("%s", &string);

    x = strlen(string);

    for (i = 0; i < x; i++){
        if (string[i] == '1' || string[i] == '2' || string[i] == '3' || string[i] == '4' || string[i] == '5' || string[i] == '6' || string[i] == '7' || string[i] == '8' || string[i] == '9' || string[i] == '0'){
            y++;
        } else {}
    }

    printf("\nA palavra tem %d números.\n", y);

    return 0;
}
