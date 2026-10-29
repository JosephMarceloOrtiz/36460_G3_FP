#include <stdio.h>

int main()
{
    long long n;
    int digito, suma = 0;

    printf("Ingrese un entero positivo: ");
    scanf("%lld", &n);

    if (n <= 0) {
        printf("El numero debe ser positivo.\n");
    } else {
        while (n > 0) {
            digito = n % 10;
            suma = suma + digito;
            n = n / 10;
        }

        printf("La suma de los digitos es: %d\n", suma);
    }

    return 0;
}
