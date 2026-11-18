//Realizado por Marcelo Ortiz
//Realizar un menu que tenga tres opciones una de vector otra de matriz y una para salir

#include <stdio.h>
#define MAX 10

// Declara la función gestionar_vector que no devuelve ningún valor (void)
void gestionar_vector() {
    int n;
    int v[MAX];

    printf("\n--- VECTOR DE TAMANO N ---\n");

    // do-while. Sirve para pedir el tamaño del vector al menos una vez y repetir la pregunta las veces que sea necesario.
    do {
        printf("Ingrese el tamano del vector (1 a %d): ", MAX);

        // Intenta leer un número entero y guardarlo en n.
        if (scanf("%d", &n) != 1) {
            printf("Error: Debe ingresar un numero entero.\n");

            // Lee y descarta para evitar un bucle infinito.
            while (getchar() != '\n');

            //Sirve para asegurar que la condición del while n <= 0 se cumpla y obligue a repetir el ciclo
            n = 0;
            //Validar el tamaño
            } else if (n <= 0 || n > MAX) {
            printf("Error: El tamano debe ser mayor a 0 y maximo %d.\n", MAX);
        }

    // sirve para el ciclo vuelve a empezar sin salirse al menú
    } while (n <= 0 || n > MAX);
    printf("Ingrese %d elementos (solo positivos mayores a 0):\n", n);

    // para recorrer cada casilla del vector una por una.
    for (int i = 0; i < n; i++) {
        // ciclo do-while. Sirve para ingresar un dato válido.
        do {
            // Muestra la posición exacta que se está llenando (ej. v[0] = ). Sirve para que el usuario sepa qué índice está capturando.
            printf("v[%d] = ", i);

            // Intenta leer el entero y guardarlo en la posición i
            if (scanf("%d", &v[i]) != 1) {
                printf("Error: Debe ingresar un numero entero.\n");

                //elimina las letras erróneas y ademas hace que el scanf funcione bien.
                while (getchar() != '\n');

                // Guarda un 0 en la posición actual. Sirve para forzar a que el ciclo 'while' repita la lectura de este mismo índice.
                v[i] = 0;
            // acepta únicamente valores positivos.
            } else if (v[i] <= 0) {
                printf("Error: No se permite el 0 ni negativos. Intente de nuevo.\n");
            }
        //repite la petición para esa misma casilla.
        } while (v[i] <= 0);
    }

    printf("\nVector ingresado:\n[ ");

    // lee todos los datos ya guardados
    for (int i = 0; i < n; i++) {

        printf("%d ", v[i]);
    }
    printf("]\n");
}

// Sirve para llenar e imprimir la matriz.
void gestionar_matriz() {
    // Declarar variables
    int filas, cols;
    // Tipo de dato
    float m[MAX][MAX];

    // Imprime el título de la opcion que escogimos
    printf("\n--- MATRIZ N x M ---\n");

    // ciclo do-while exclusivo para las filas
    do {
        // Pide al usuario la cantidad de filas.
        printf("Ingrese el numero de filas (1 a %d): ", MAX);

        // Si son datos validos
        if (scanf("%d", &filas) != 1) {

            printf("Error: Debe ingresar un numero entero.\n");
            //para borrar cosas innecesarias
            while (getchar() != '\n');
            // Asigna 0 a filas para forzar la repetición del bucle.
            filas = 0;
            } else if (filas <= 0 || filas > MAX) { // <-- Cambiado a 'else if'
            printf("Error: Las filas deben ser mayores a 0 y maximo %d.\n", MAX);
        }
        // mantiene las dimensiones
        if (filas <= 0 || filas > MAX) {

            printf("Error: Las filas deben ser mayores a 0 y maximo %d.\n", MAX);
        }
    // Repite la petición de filas
    } while (filas <= 0 || filas > MAX);

    // do-while para las columnas.
    do {
        // solicita la segunda dimensión.
        printf("Ingrese el numero de columnas (1 a %d): ", MAX);

        // Verifica que sea un número entero.
        if (scanf("%d", &cols) != 1) {

            printf("Error: Debe ingresar un numero entero.\n");
            // Limpia errores
            while (getchar() != '\n');
            // Asigna 0 para la repeticion
            cols = 0;
            } else if (cols <= 0 || cols > MAX) {
            printf("Error: Las columnas deben ser mayores a 0 y maximo %d.\n", MAX);
        }
        // Comprueba que las columnas estén entre 1 y 10.
        if (cols <= 0 || cols > MAX) {

            printf("Error: Las columnas deben ser mayores a 0 y maximo %d.\n", MAX);
        }
    // Repite la petición de columnas
    } while (cols <= 0 || cols > MAX);

    printf("Ingrese los elementos de la matriz (solo positivos mayores a 0):\n");

    // Sirve para moverse verticalmente por la matriz.
    for (int i = 0; i < filas; i++) {
        // Sirve para moverse horizontalmente celda por celda.
        for (int j = 0; j < cols; j++) {
            // Sirve para no avanzar de celda hasta que el número sea positivo.
            do {
                //posición del dato.
                printf("m[%d][%d] = ", i, j);

                // Lee un número decimal (%f)
                if (scanf("%f", &m[i][j]) != 1) {
                    // Muestra error si se escribieron letras.
                    printf("Error: Debe ingresar un numero valido.\n");
                    // Limpia el teclado.
                    while (getchar() != '\n');
                    // Asigna 0.0 flotante a la celda para obligar a repetir el ciclo.
                    m[i][j] = 0.0f;
                // rechazar ceros y números negativos.
                } else if (m[i][j] <= 0) {
                    printf("Error: No se permite ceros ni negativos. Intente de nuevo.\n");
                }
            // Condición: repite la captura de la celda
            } while (m[i][j] <= 0);
        }
    }

    // visualización final.
    printf("\nMatriz ingresada:\n");

    // Ciclo externo para recorrer las filas al imprimir.
    for (int i = 0; i < filas; i++) {
        // Ciclo interno para recorrer las columnas de cada fila al imprimir.
        for (int j = 0; j < cols; j++) {

            printf("%.2f\t", m[i][j]);
        }
        // Imprime un salto de línea
        printf("\n");
    }
}


int main() {

    int opcion;

    // Sirve para que el programa siga funcionando y mostrando opciones hasta que el usuario decida salir.
    do {

        printf("\n====================\n");
        printf("       MENU         \n");
        printf("====================\n");
        printf("1. Vector de tamano N\n");
        printf("2. Matriz N x M\n");
        printf("3. Salida\n");
        printf("Seleccione una opcion: ");

        // protege el menú
        if (scanf("%d", &opcion) != 1) {
            // Limpia los caracteres que no valen.
            while (getchar() != '\n');
            // Asigna 0 a 'opcion'. Sirve para que el 'switch' caiga automáticamente en el caso 'default' y muestre el error.
            opcion = 0;
        }

        // Estructura switch que evalúa el valor de 'opcion'. Sirve para dirigir el flujo del programa hacia la función elegida.
        switch(opcion) {
            // Si 'opcion' vale 1:
            case 1:
                // Ejecuta todo el bloque de código del vector.
                gestionar_vector();
                // Detiene el switch al terminar la función. Sirve para evitar que se ejecuten los casos de abajo.
                break;
            // Si 'opcion' vale 2:
            case 2:
                // Ejecuta todo el bloque de código de la matriz.
                gestionar_matriz();
                // Detiene el switch al terminar la función.
                break;
            // Si 'opcion' vale 3:
            case 3:
                // Muestra un mensaje de despedida antes de cerrar.
                printf("Saliendo del programa...\n");
                // Detiene el switch.
                break;
            // Si 'opcion' tiene cualquier otro número distinto de 1, 2 o 3:
            default:
                // Informa al usuario que eligió una opción inexistente.
                printf("Opcion invalida. Intente de nuevo.\n");
        }
    // Condición del menú: mientras la opción sea distinta de 3, vuelve a mostrar el menú principal.
    } while(opcion != 3);

    // Devuelve 0 al sistema operativo. Sirve para indicar que el programa terminó su ejecución correctamente y sin fallos.
    return 0;
}
