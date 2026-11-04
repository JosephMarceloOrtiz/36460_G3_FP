//Realizado por Marcelo Ortiz 
//Problema 1.13. Número capicúa
// Desarrolla un programa que lea un entero positivo y determine si es capicúa, es decir, si se lee igual de izquierda a derecha que de derecha a izquierda.
#include <stdio.h>

int main() {
    int n, original, invertido, digito;


    printf("Ingrese un numero entero: ");
    scanf("%d", &n);

    original = n;
    invertido = 0;


    while (n > 0) {
        digito = n % 10;
        invertido = invertido * 10 + digito;
        n = n / 10;
    }


    if (original == invertido) {
        printf("Es capicua\n");
    } else {
        printf("No es capicua\n");
    }

    return 0;
}
