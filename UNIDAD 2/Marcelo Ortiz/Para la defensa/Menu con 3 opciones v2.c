//Realizado por marcelo ortiz
//Realizar un menu con 3 opciones, un cuadrado hueco, la serie de figonacci y la opcion de salir
#include <stdio.h>

// Función recursiva para calcular el término n de la serie de Fibonacci
int fibonacci(int n) {
    if (n <= 1) {
        return n; // Casos base: si n es 0 o 1, devuelve n
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2); // Caso recursivo: suma los dos anteriores
    }
}

// Función para dibujar un cuadrado hueco con asteriscos
void dibujarCuadradoHueco(int lado) {
    for (int i = 0; i < lado; i++) {         // Recorre las filas
        for (int j = 0; j < lado; j++) {     // Recorre las columnas
            // Imprime asterisco si está en el borde superior, inferior, izquierdo o derecho
            if (i == 0 || i == lado - 1 || j == 0 || j == lado - 1) {
                printf("* ");
            } else {
                printf("  "); // Imprime espacios en blanco para dejar el centro "hueco"
            }
        }
        printf("\n"); // Salto de línea al terminar cada fila
    }
}

int main() {
    int opcion;

    do {
        // Mostrar el menú principal en pantalla
        printf("\n--- MENU PRINCIPAL ---\n");
        printf("1. Cuadrado hueco con asteriscos\n");
        printf("2. Serie de Fibonacci\n");
        printf("3. Salir\n");
        printf("Elija una opcion: ");

        // Validar que la opción del menú sea un número entero
        if (scanf("%d", &opcion) != 1) {
            printf("Error: Debe ingresar un numero entero valido.\n");
            // Limpiar el búfer de entrada para evitar el bucle infinito
            while (getchar() != '\n');
            opcion = 0; // Forzar una opción inválida para que el ciclo continúe
            continue;
        }

        // Evaluar la opción seleccionada por el usuario
        switch (opcion) {
            case 1: {
                int lado;
                // Bucle que se repite hasta que se ingrese un número válido mayor a 0
                do {
                    printf("Ingrese el tamano del lado del cuadrado (mayor a 0): ");
                    if (scanf("%d", &lado) != 1) {
                        printf("Error: Ingrese un valor numerico valido.\n");
                        while (getchar() != '\n'); // Limpiar el carácter erróneo
                        lado = -1; // Mantener en estado inválido para repetir
                        continue;
                    }
                    if (lado <= 0) {
                        printf("Error: No se aceptan ceros ni numeros negativos. Intente de nuevo.\n");
                    }
                } while (lado <= 0);

                dibujarCuadradoHueco(lado); // Llamada a la función del cuadrado
                break;
            }
            case 2: {
                int terminos;
                // Bucle que se repite hasta que se ingrese un número entero no negativo
                do {
                    printf("Ingrese el numero de terminos para la serie de Fibonacci (no negativo): ");
                    if (scanf("%d", &terminos) != 1) {
                        printf("Error: Ingrese un valor numerico valido.\n");
                        while (getchar() != '\n'); // Limpiar el carácter erróneo
                        terminos = -1; // Mantener en estado inválido para repetir
                        continue;
                    }
                    if (terminos < 0) {
                        printf("Error: El numero de terminos debe ser no negativo. Intente de nuevo.\n");
                    }
                } while (terminos < 0);

                printf("Serie de Fibonacci:\n");
                // Bucle para imprimir cada término usando la función recursiva
                for (int i = 0; i < terminos; i++) {
                    printf("%d ", fibonacci(i));
                }
                printf("\n");
                break;
            }
            case 3:
                printf("Saliendo del programa...\n");
                break;
            default:
                printf("Opcion invalida. Intente de nuevo.\n");
        }
    } while (opcion != 3); // El ciclo se repite mientras no se elija salir (opción 3)

    return 0;
}
