#include <stdio.h>
#include <stdbool.h>

int main()
{
    int a, b;

    printf("Ingrese el limite inferior: ");
    scanf("%d", &a);

    printf("Ingrese el limite superior: ");
    scanf("%d", &b);

    if (a > b) {
        int aux = a;
        a = b;
        b = aux;
    }

    printf("Numeros primos entre %d y %d:\n", a, b);

    for (int n = a; n <= b; n++) {
        bool primo = true;

        if (n < 2) {
            primo = false;
        } else {
            for (int i = 2; i <= n / i; i++) {
                if (n % i == 0) {
                    primo = false;
                    break;
                }
            }
        }

        if (primo) {
            printf("%d ", n);
        }
    }

    printf("\n");

    return 0;
}
