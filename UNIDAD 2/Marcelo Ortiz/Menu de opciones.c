//Realizado por Marcelo Ortiz

#include <stdio.h>

int main() {
    int opcion;
    int lado;
    int i, j;
    int cantidad;
    int primero = 0, segundo = 1, siguiente;
//do-while	Mantiene el menú funcionando hasta seleccionar salir.
    do {
        // Menu principal
        printf("\n===== MENU PRINCIPAL =====\n");
        printf("1. Cuadrado hueco\n");
        printf("2. Serie de Fibonacci\n");
        printf("3. Salir\n");
        printf("==========================\n");
        printf("Seleccione una opcion: ");
        scanf("%d", &opcion);
//switch-case	Permite seleccionar una de las tres opciones.
        switch (opcion) {

            case 1:
                // Dibujar cuadrado hueco
                printf("\nIngrese el tamano del lado: ");
                scanf("%d", &lado);
//if-else	Comprueba las condiciones del cuadrado y la cantidad de términos.
                if (lado >= 2) {
                    printf("\n");
//for	Repite las instrucciones para dibujar el cuadrado y generar Fibonacci.
//El primero controla las filas.
                    for (i = 1; i <= lado; i++)
//El segundo controla las columnas.
                        for (j = 1; j <= lado; j++) {
//El if comprueba si estamos en el borde del cuadrado.
                            if (i == 1 || i == lado ||
                                j == 1 || j == lado) {
                                printf("* ");
                            } else {
                                printf("  ");
                            }
                        }
                        printf("\n");
                    }
                }else {
                    printf("\nEl lado debe ser mayor o igual a 2.\n");
                }

                break;

            case 2:
                // Serie de Fibonacci
                printf("\nCuantos terminos desea mostrar: ");
                scanf("%d", &cantidad);

                if (cantidad > 0) {
                    primero = 0;
                    segundo = 1;

                    printf("\nSerie de Fibonacci:\n");

                    for (i = 1; i <= cantidad; i++) {
                        printf("%d ", primero);

                        siguiente = primero + segundo;
                        primero = segundo;
                        segundo = siguiente;
                    }

                    printf("\n");
                } else {
                    printf("\nIngrese una cantidad positiva.\n");
                }

                break;

            case 3:
                printf("\nPrograma finalizado.\n");
                break;

            default:
                printf("\nOpcion no valida. Intente nuevamente.\n");
        }

    } while (opcion != 3);

    return 0;
}
