//Realizado por Marcelo Ortiz 
//Problema 1.10. Factorial
//Desarrolla un programa que lea un número entero n ≥ 0 y calcule n! = 1 · 2 · … · n, sabiendo que 0! = 1
#include <stdio.h>

int main() {
    int n, i;
    long long factorial;


    printf("Ingrese un numero: ");
    scanf("%d", &n);


    if (n < 0) {
        printf("El numero debe ser no negativo\n");
    }
    else {
        factorial = 1;
        i = 1;


        while (i <= n) {
            factorial = factorial * i;
            i = i + 1;
        }

        printf("El factorial es: %lld\n", factorial);
    }

    return 0;
}
