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
        printf("Ingrese una opcion (1-4): ");

        // Validar que se ingrese un numero entero
        if (scanf("%d", &opcion) != 1) {
            while (getchar() != '\n'); // Limpiar el bufer de entrada
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
                printf("\nSalir...\n");
                break;
            default:
                printf("\nOpcion no valida\n");
                pausarPantalla();
                break;
        }
    } while (opcion != 4);

    return 0;
}

// Funcion para limpiar la consola (compatible con Windows y Linux/Mac)
void limpiarPantalla() {
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
}

// Funcion para esperar una pulsacion de tecla antes de volver al menu
void pausarPantalla() {
    printf("\nPresione una tecla para continuar...");
    while (getchar() != '\n'); // Vacia cualquier salto de linea pendiente de scanf
    getchar(); // Espera la pulsacion de Enter/tecla
}

// RF-02 | Opcion 1: Validar fecha
void validarFecha() {
    int anio, mes, dia, max_dias;
    const char *nombres_meses[] = {
        "", "enero", "febrero", "marzo", "abril", "mayo", "junio",
        "julio", "agosto", "septiembre", "octubre", "noviembre", "diciembre"
    };

    printf("====================================\n");
    printf("           VALIDAR FECHA            \n");
    printf("====================================\n");

    // 1. Solicitar y validar anio (1900 - 2015 inclusive)
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

    // Determinar rango de dias segun el mes seleccionado
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

    // 3. Solicitar y validar dia segun el mes
    do {
        printf("Ingrese el dia para %s (1-%d): ", nombres_meses[mes], max_dias);
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

    // 4. Mostrar resultado en formato "dia de Mes de anio"
    printf("\n------------------------------------\n");
    printf("Fecha ingresada: %d de %s de %d\n", dia, nombres_meses[mes], anio);
    printf("------------------------------------\n");
}

// RF-03 | Opcion 2: Desplegar serie de letras
void desplegarSerieLetras() {
    int n, i;
    char letra_sup = 'a';
    char letra_inf = 'b';

    printf("====================================\n");
    printf("       DESPLEGAR SERIE LETRAS       \n");
    printf("====================================\n");

    // Solicitar cantidad de terminos (> 0)
    do {
        printf("Ingrese la cantidad de terminos (> 0): ");
        if (scanf("%d", &n) != 1) {
            printf("Error: Ingrese un numero entero valido.\n");
            while (getchar() != '\n');
            n = 0;
            continue;
        }
        if (n <= 0) {
            printf("Error: La cantidad debe ser mayor que cero.\n");
        }
    } while (n <= 0);

    printf("\n");

    // Primera fila: letras que comienzan en 'a' y avanzan de 2 en 2
    for (i = 0; i < n; i++) {
        printf("%c ", letra_sup);
        letra_sup += 2;
    }
    printf("\n");

    // Segunda fila: guiones de separacion visual
    for (i = 0; i < n; i++) {
        printf("- ");
    }
    printf("\n");

    // Tercera fila: letras que comienzan en 'b' y avanzan de 2 en 2
    for (i = 0; i < n; i++) {
        printf("%c ", letra_inf);
        letra_inf += 2;
    }
    printf("\n");
}

// RF-04 | Opcion 3: Desplegar serie de numeros
void desplegarSerieNumero() {
    int n, i;
    int sub1 = 1;
    int sub2 = 5;

    printf("====================================\n");
    printf("       DESPLEGAR SERIE NUMERO       \n");
    printf("====================================\n");

    // Solicitar cantidad de terminos (>= 0)
    do {
        printf("Ingrese la cantidad de terminos (>= 0): ");
        if (scanf("%d", &n) != 1) {
            printf("Error: Ingrese un numero entero valido.\n");
            while (getchar() != '\n');
            n = -1;
            continue;
        }
        if (n < 0) {
            printf("Error: La cantidad no puede ser negativa.\n");
        }
    } while (n < 0);

    printf("\n");

    // Imprimir parejas completas
    int parejas = n / 2;
    for (i = 0; i < parejas; i++) {
        printf("%d  %d\n", sub1, sub2);
        sub1 += 2;
        sub2 += 2;
    }

    // Si n es impar, imprimir el ultimo termino de la primera subsecuencia
    if (n % 2 != 0) {
        printf("%d\n", sub1);
    }
}
