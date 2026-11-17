#include <stdio.h>

int main() {
    int opcion;

    do {
        printf("\n====================================================\n");
        printf("                    MENU PRINCIPAL                  \n");
        printf("====================================================\n");
        printf("  1. Cuadrado hueco                                 \n");
        printf("  2. Serie de Fibonacci                             \n");
        printf("  3. Vector unidimensional                          \n");
        printf("  4. Matriz                                         \n");
        printf("  5. Salir del programa                             \n");
        printf("====================================================\n");
        printf(" Seleccione una opcion (1-5): ");
        scanf("%d", &opcion);

        switch(opcion) {
            case 1: {
                // ==========================================================
                // OPCION 1: CUADRADO HUECO
                // ==========================================================
                printf("\n========================================\n");
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
                            if (i == 0 || i == lado - 1 || j == 0 || j == lado - 1) {
                                printf("* ");
                            } else {
                                printf("  ");
                            }
                        }
                        printf("\n");
                    }
                }
                break;
            }

            case 2: {
                // ==========================================================
                // OPCION 2: SERIE DE FIBONACCI
                // ==========================================================
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
                break;
            }

            case 3: {
                // ==========================================================
                // OPCION 3: VECTOR UNIDIMENSIONAL (ENTEROS)
                // ==========================================================
                printf("\n----------------------------------------------------\n");
                printf("         EJECUTANDO: PARTE 3 (VECTOR)               \n");
                printf("----------------------------------------------------\n");

                int n_vector;
                printf("Ingrese el tamano del vector: ");
                scanf("%d", &n_vector);

                while (n_vector <= 0) {
                    printf("Error. El tamano debe ser mayor a 0. Intente de nuevo: ");
                    scanf("%d", &n_vector);
                }

                int vector[n_vector];

                printf("\nIngrese los %d elementos enteros del vector:\n", n_vector);
                for (int i = 0; i < n_vector; i++) {
                    printf("  Elemento [%d]: ", i);
                    scanf("%d", &vector[i]);
                }

                printf("\nVector ingresado:\n[ ");
                for (int i = 0; i < n_vector; i++) {
                    printf("%d ", vector[i]);
                }
                printf("]\n");
                break;
            }

            case 4: {
                // ==========================================================
                // OPCION 4: MATRIZ DE NÚMEROS FLOTANTES (MAYORES O IGUALES A 0)
                // ==========================================================
                printf("\n----------------------------------------------------\n");
                printf("         EJECUTANDO: PARTE 4 (MATRIZ)               \n");
                printf("----------------------------------------------------\n");

                int filas, columnas;
                printf("Ingrese el numero de filas de la matriz: ");
                scanf("%d", &filas);
                while (filas <= 0) {
                    printf("Error. Las filas deben ser mayores a 0: ");
                    scanf("%d", &filas);
                }

                printf("Ingrese el numero de columnas de la matriz: ");
                scanf("%d", &columnas);
                while (columnas <= 0) {
                    printf("Error. Las columnas deben ser mayores a 0: ");
                    scanf("%d", &columnas);
                }

                float matriz[filas][columnas];

                printf("\nIngrese los elementos de la matriz (%dx%d).\n", filas, columnas);
                printf("RESTRICCION: Todos los elementos deben ser >= 0.\n\n");

                for (int i = 0; i < filas; i++) {
                    for (int j = 0; j < columnas; j++) {
                        do {
                            printf("  Matriz [%d][%d]: ", i, j);
                            scanf("%f", &matriz[i][j]);

                            if (matriz[i][j] < 0) {
                                printf("    Valor invalido. Debe ser mayor o igual a 0. Vuelva a ingresar un valor.\n");
                            }
                        } while (matriz[i][j] < 0);
                    }
                }

                printf("\nMatriz validada:\n");
                for (int i = 0; i < filas; i++) {
                    printf("  | ");
                    for (int j = 0; j < columnas; j++) {
                        printf("%8.2f ", matriz[i][j]);
                    }
                    printf(" |\n");
                }
                break;
            }

            case 5:
                // ==========================================================
                // OPCION 5: SALIDA DIRECTA DEL PROGRAMA
                // ==========================================================
                printf("\n========================================\n");
                printf(" 5. FIN DEL PROGRAMA\n");
                printf("========================================\n");
                printf(" Programa finalizado con exito. ¡Adios! \n");
                printf("========================================\n");
                break;

            default:
                printf("\n Opcion no valida. Por favor, elija un numero entre 1 y 5.\n");
        }

    } while (opcion != 5);

    return 0;
}
