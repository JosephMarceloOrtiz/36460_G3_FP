#include <stdio.h>

int main() {
    int opcion;

    do {
        printf("                    MENU                    \n");
        printf("====================================================\n");
        printf("  Parte 1: Vector unidimensional       \n");
        printf("  Parte 2: Matriz de flotantes          \n");
        printf("  Parte 3: Salir del programa                             \n");
        printf("====================================================\n");
        printf(" Seleccione una opcion (1-3): ");
        scanf("%d", &opcion);

        switch(opcion) {
            case 1: {
                // ==========================================================
                // PARTE 1: VECTOR UNIDIMENSIONAL (ENTEROS)
                // ==========================================================
                printf("\n----------------------------------------------------\n");
                printf("       EJECUTANDO: PARTE 1 (VECTOR)      \n");
                printf("----------------------------------------------------\n");

                int n_vector;
                printf("Ingrese el tamano del vector: ");
                scanf("%d", &n_vector);

                // Validación para asegurar un tamaño positivo
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

                // Mostrar el vector en pantalla
                printf("\nVector ingresado:\n[ ");
                for (int i = 0; i < n_vector; i++) {
                    printf("%d ", vector[i]);
                }
                printf("]\n");
                break;
            }

            case 2: {
                // ==========================================================
                // PARTE 2: MATRIZ DE NÚMEROS FLOTANTES (MAYORES O IGUALES A 0)
                // ==========================================================
                printf("\n----------------------------------------------------\n");
                printf("    EJECUTANDO: PARTE 2 (MATRIZ)  \n");
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

                float matriz[filas][columnas]; // Matriz exclusiva de tipo flotante

                printf("\nIngrese los elementos de la matriz (%dx%d).\n", filas, columnas);
                printf("RESTRICCION: Todos los elementos deben ser >= 0.\n\n");

                for (int i = 0; i < filas; i++) {
                    for (int j = 0; j < columnas; j++) {
                        // Bucle de validación para cada celda de la matriz
                        do {
                            printf("  Matriz [%d][%d]: ", i, j);
                            scanf("%f", &matriz[i][j]);

                            if (matriz[i][j] < 0) {
                                printf("    Valor invalido. Debe ser mayor o igual a 0. Vuelva a ingresar un valor.\n");
                            }
                        } while (matriz[i][j] < 0); // Se repite si el número es negativo
                    }
                }

                // Mostrar la matriz en formato tabular alineado
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

            case 3:
                // ==========================================================
                // PARTE 3: SALIDA DIRECTA DEL PROGRAMA
                // ==========================================================
                printf("\n Fin del programa. ¡Hasta pronto! \n");
                break;

            default:
                printf("\n Opcion no valida. Por favor, elija 1, 2 o 3.\n");
        }

    } while (opcion != 3); // El menú se repite hasta que el usuario elija la opción 3

    return 0;
}
