#include <stdio.h>

int main() {
    int a, b, resto;


    printf("Ingrese el valor de a: ");
    scanf("%d", &a);
    printf("Ingrese el valor de b: ");
    scanf("%d", &b);


    while (b != 0) {
        resto = a % b;
        a = b;
        b = resto;
    }

    printf("El MCD es: %d\n", a);

    return 0;
}
