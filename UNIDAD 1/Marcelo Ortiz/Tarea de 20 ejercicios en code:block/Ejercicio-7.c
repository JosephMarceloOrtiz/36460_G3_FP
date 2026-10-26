#include <stdio.h>

int main() {
    int N, i, R;

    printf("Ingrese el valor de N: ");
    scanf("%d", &N);

    if (N <= 0) {
        printf("N debe ser positivo\n");
    }
    else {
        i = 1;

        while ((i * i) <= N) {
            i = i + 1;
        }

        R = i - 1;

        printf("Raiz entera: %d\n", R);
    }

    return 0;
}
