#include <stdio.h>

int main() {
    int n, anterior, actual, siguiente, i;


    printf("Ingrese el valor de n: ");
    scanf("%d", &n);

    anterior = 0;
    actual = 1;
    i = 1;


    while (i <= n) {
        printf("%d\n", anterior);
        siguiente = anterior + actual;
        anterior = actual;
        actual = siguiente;
        i = i + 1;
    }

    return 0;
}
