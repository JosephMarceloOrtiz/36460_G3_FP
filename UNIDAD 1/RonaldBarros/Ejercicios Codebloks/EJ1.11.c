#include <stdio.h>

int main()
{
    int n;
    long long anterior = 0, actual = 1, siguiente;

    printf("Cuantos terminos desea mostrar: ");
    scanf("%d", &n);

    if (n < 1) {
        printf("Ingrese un numero mayor o igual a 1.\n");
    } else {
        for (int i = 1; i <= n; i++) {
            printf("%lld ", anterior);

            siguiente = anterior + actual;
            anterior = actual;
            actual = siguiente;
        }
        printf("\n");
    }

    return 0;
}
