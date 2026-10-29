#include <stdio.h>
#include <stdbool.h>

int main()
{
    int n;
    bool primo = true;

    printf("Ingrese un numero entero: ");
    scanf("%d", &n);

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
        printf("El numero es primo.\n");
    } else {
        printf("El numero no es primo.\n");
    }

    return 0;
}
