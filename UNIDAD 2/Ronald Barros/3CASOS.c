#include <stdio.h>

int main() {
    // ========================================
    // 1. SECUENCIA: Cuadrado hueco
    // ========================================
    printf("========================================\n");
    printf(" 1. GENERANDO CUADRADO HUECO\n");
    printf("========================================\n");

    int lado;
    printf("Ingrese el tamano del lado del cuadrado: ");
    scanf("%d", &lado);

    if (lado < 2) {
        printf("El tamano debe ser mayor o igual a 2 para formar bordes.\n");
    } else {
        printf("\n");
        for (int i = 0; i < lado; i++) {
            for (int j = 0; j < lado; j++) {
                // Imprime asterisco solo en el perímetro
                if (i == 0 || i == lado - 1 || j == 0 || j == lado - 1) {
                    printf("* ");
                } else {
                    printf("  "); // Espacio en blanco para el interior
                }
            }
            printf("\n");
        }
    }

    // ========================================
    // 2. SECUENCIA: Serie de Fibonacci
    // ========================================
    printf("\n========================================\n");
    printf(" 2. GENERANDO SERIE DE FIBONACCI\n");
    printf("========================================\n");

    int n;
    long long t1 = 0, t2 = 1, siguiente = 0;

    printf("Cuantos terminos de la serie Fibonacci desea ver?: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Por favor, ingrese un numero mayor a 0.\n");
    } else {
        printf("Serie de Fibonacci: ");
        for (int i = 1; i <= n; ++i) {
            if (i == 1) {
                printf("%lld ", t1);
                continue;
            }
            if (i == 2) {
                printf("%lld ", t2);
                continue;
            }
            siguiente = t1 + t2;
            t1 = t2;
            t2 = siguiente;
            printf("%lld ", siguiente);
        }
        printf("\n");
    }

    // ========================================
    // 3. SECUENCIA: Cierre del programa
    // ========================================
    printf("\n========================================\n");
    printf(" 3. FIN DEL PROGRAMA\n");
    printf("========================================\n");
    printf(" Programa finalizado con exito. Adios!  \n");
    printf("========================================\n");

    return 0;
}
