//Realizado por Marcelo Ortiz 
//Problema 1.11. Serie de Fibonacci
//Desarrolla un programa que lea un entero n ≥ 1 y muestre los primeros n términos de la serie de Fibonacci (0, 1, 1, 2, 3, 5, 8, …), donde cada término es la suma de los dos anteriores.
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
