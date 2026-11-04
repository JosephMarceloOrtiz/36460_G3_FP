//Problema 1.18. Triángulo de asteriscos
//Hecho por Marcelo Ortiz 
//Desarrolla un programa que lea un entero n ≥ 1 y dibuje por pantalla un triángulo rectángulo de n filas, donde la fila i tiene i asteriscos.
#include <stdio.h>

int main() {
    int n;

    printf("Ingrese un entero n (>= 1) para las filas del triangulo: ");
    scanf("%d", &n);

    // Ciclo externo: controla el número de filas (i)
    for (int i = 1; i <= n; i++) {
        // Ciclo interno: imprime 'i' asteriscos en la fila actual
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        // Salto de línea al terminar cada fila
        printf("\n"); 
    }

    return 0;
}
