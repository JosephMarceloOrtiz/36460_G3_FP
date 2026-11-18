#include <stdio.h>
#include <stdlib.h> // Necesario para system("cls") o system("clear")

// Función auxiliar para pausar y limpiar la pantalla antes de volver al menú
void Limpiar() {
    printf("\nPresione Enter para regresar al menu principal...");
    while (getchar() != '\n'); // Limpiar cualquier residuo previo
    getchar(); // Esperar a que el usuario presione Enter

    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif
}

int main() {
    int opcion;

    do {
        // Mostrar el menú principal en pantalla
        printf("\n--- MENU PRINCIPAL ---\n");
        printf("1. Validar fechas\n");
        printf("2. Desplegar serie letras\n");
        printf("3. Desplegar serie numero\n");
        printf("4. Salir\n");
        printf("Elija una opcion: ");

        // Validar que la opción del menú sea un número entero
        if (scanf("%d", &opcion) != 1) {
            printf("Error: opcion no valida! Debe ingresar un numero entero valido.\n");
            // evita el bucle infinito
            while (getchar() != '\n');
            opcion = 0; // continua
            continue;
        }


      switch (opcion) {
            case 1: {
                int anio, mes, dia, tope;

                // año
                do {
                    printf("Ingrese un anio (1900-2015): ");
                    if (scanf("%d", &anio) != 1) {
                        printf("Entrada invalida. Intente de nuevo.\n");
                        while (getchar() != '\n');
                        anio = 0;
                    }
                } while (anio < 1900 || anio > 2015);

                // mes
                do {
                    printf("Ingrese un mes (1-12): ");
                    if (scanf("%d", &mes) != 1) {
                        printf("Entrada invalida. Intente de nuevo.\n");
                        while (getchar() != '\n');
                        mes = 0; // Forzar repetición
                    }
                } while (mes < 1 || mes > 12);

                // dias
                if (mes == 2) {
                    tope = 29; // Febrero
                } else if (mes == 4 || mes == 6 || mes == 9 || mes == 11) {
                    tope = 30; // Abril, Junio, Septiembre, Noviembre
                } else {
                    tope = 31; // Enero, Marzo, Mayo, Julio, Agosto, Octubre, Diciembre
                }

                // validacion
                do {
                    printf("Ingrese un dia (1-%d): ", tope);
                    if (scanf("%d", &dia) != 1) {
                        printf("Entrada invalida. Intente de nuevo.\n");
                        while (getchar() != '\n');
                        dia = 0; // Forzar repetición
                    }
                } while (dia < 1 || dia > tope);

                // nombres
                const char *nombresMeses[] = {
                    "", "enero", "febrero", "marzo", "abril", "mayo", "junio",
                    "julio", "agosto", "septiembre", "octubre", "noviembre", "diciembre"
                };

                // formato
                printf("\nFecha ingresada: %d de %s de %d\n", dia, nombresMeses[mes], anio);
                Limpiar();
                break;

            }
            case 2: {
                    printf("\nEjecutando: Desplegar serie numero...\n");
                break;

            }
            case 3:
                printf("\nEjecutando: Desplegar serie numero...\n");
                Limpiar();
                break;
            case 4:
                printf("\nSaliendo del programa...\n");
                break;
            default:
                printf("\nOpcion no valida.\n");
                Limpiar();
                break;
        }

    } while (opcion != 4);

    return 0;
}
