#include <stdio.h>
#include <stdlib.h>

#define ANIO_MIN 1900
#define ANIO_MAX 2015

// Prototipos de funciones
void limpiarPantalla();
void pausarPantalla();
void validarFecha();
void desplegarSerieLetras();
void desplegarSerieNumero();

int main() {
    int opcion;

    do {
        limpiarPantalla();
        printf("====================================\n");
        printf("           MENU PRINCIPAL           \n");
        printf("====================================\n");
        printf("1. Validar fecha\n");
        printf("2. Desplegar serie letras\n");
        printf("3. Desplegar serie numero\n");
        printf("4. Salir\n");
        printf("====================================\n");
        printf("Ingrese una opcion (1 - 4): ");

        // Validar que se ingrese un número entero
        if (scanf("%d", &opcion) != 1) {
            while (getchar() != '\n'); // Limpiar el búfer de entrada
            opcion = 0; // Forzar entrada al caso default
        }

        switch (opcion) {
            case 1:
                limpiarPantalla();
                validarFecha();
                pausarPantalla();
                break;

            case 2:
                limpiarPantalla();
                desplegarSerieLetras();
                pausarPantalla();
                break;

            case 3:
                limpiarPantalla();
                desplegarSerieNumero();
                pausarPantalla();
                break;

            case 4:
                printf("\nSaliendo del programa...\n");
                break;

            default:
                printf("\nOpcion no valida\n");
                pausarPantalla();
                break;
        }

    } while (opcion != 4);

    return 0;
}

// Función para limpiar la consola (compatible con Windows y Linux/Mac)
void limpiarPantalla() {
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif
}

// Función para esperar una pulsación de tecla antes de volver al menú
void pausarPantalla() {
    printf("\nPresione una tecla para continuar...");
    while (getchar() != '\n'); // Vacía cualquier salto de línea pendiente de scanf
    getchar(); // Espera la pulsación de Enter/tecla
}

// RF-02 | Opción 1: Validar fecha
void validarFecha() {
    int anio, mes, dia, max_dias;
    const char *nombres_meses[] = {
        "", "enero", "febrero", "marzo", "abril", "mayo", "junio",
        "julio", "agosto", "septiembre", "octubre", "noviembre", "diciembre"
    };

    printf("====================================\n");
    printf("           VALIDAR FECHA            \n");
    printf("====================================\n");

    // 1. Solicitar y validar año (1900 - 2015 inclusive)
    do {
        printf("Ingrese un anio (%d - %d): ", ANIO_MIN, ANIO_MAX);
        if (scanf("%d", &anio) != 1) {
            printf("Error: Ingrese un numero entero valido.\n");
            while (getchar() != '\n');
            anio = 0;
            continue;
        }
        if (anio < ANIO_MIN || anio > ANIO_MAX) {
            printf("Error: El anio debe estar entre %d y %d.\n", ANIO_MIN, ANIO_MAX);
        }
    } while (anio < ANIO_MIN || anio > ANIO_MAX);

    // 2. Solicitar y validar mes (1 - 12 inclusive)
    do {
        printf("Ingrese el mes en numeros (1 - 12): ");
        if (scanf("%d", &mes) != 1) {
            printf("Error: Ingrese un numero entero valido.\n");
            while (getchar() != '\n');
            mes = 0;
            continue;
        }
        if (mes < 1 || mes > 12) {
            printf("Error: El mes debe estar entre 1 y 12.\n");
        }
    } while (mes < 1 || mes > 12);

    // Determinar rango de días según el mes seleccionado
    switch (mes) {
        case 4: case 6: case 9: case 11:
            max_dias = 30;
            break;
        case 2:
            max_dias = 29;
            break;
        default: // 1, 3, 5, 7, 8, 10, 12
            max_dias = 31;
            break;
    }

    // 3. Solicitar y validar día según el mes
    do {
        printf("Ingrese el dia para %s (1 - %d): ", nombres_meses[mes], max_dias);
        if (scanf("%d", &dia) != 1) {
            printf("Error: Ingrese un numero entero valido.\n");
            while (getchar() != '\n');
            dia = 0;
            continue;
        }
        if (dia < 1 || dia > max_dias) {
            printf("Error: Para %s, el dia debe estar entre 1 y %d.\n", nombres_meses[mes], max_dias);
        }
    } while (dia < 1 || dia > max_dias);

    // 4. Mostrar resultado en formato «día de Mes de año»
    printf("\n------------------------------------\n");
    printf("Fecha ingresada: %d de %s de %d\n", dia, nombres_meses[mes], anio);
    printf("------------------------------------\n");
}

// Placeholder para RF-03 | Opción 2
void desplegarSerieLetras() {
    printf("====================================\n");
    printf("      DESPLEGAR SERIE LETRAS        \n");
    printf("====================================\n");
    printf("[Pendiente: Indique los requerimientos de esta serie]\n");
}

// Placeholder para RF-04 | Opción 3
void desplegarSerieNumero() {
    printf("====================================\n");
    printf("      DESPLEGAR SERIE NUMERO        \n");
    printf("====================================\n");
    printf("[Pendiente: Indique los requerimientos de esta serie]\n");
}
