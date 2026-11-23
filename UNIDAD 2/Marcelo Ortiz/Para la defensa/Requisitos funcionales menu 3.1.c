//Realizado por Marcelo Ortiz
//NRC:36460
//RF-01 | Menú principal
//RF-02 | Opción 1: Validar fecha
//RF-03 | Opción 2: Desplegar serie de letras
//RF-04 | Opción 3: Desplegar serie de números
//RF-05 | Opción 4: Salir


#include <stdio.h>
#include <stdlib.h>

//VARIABLES
void limpiarEntrada(void);
void mostrarMenu(void);
int leerEntero(const char* mensaje);
void Limpiar(void);

int obtenerDiasMaximoMes(int mes);
const char* obtenerNombreMes(int mes);

void validarFecha(void);
void SerieLetras(void);
void SerieNumeros(void);


//MENU
void mostrarMenu(void) {
    printf("MENU\n");
    printf("1. Validar fecha\n");
    printf("2. Desplegar serie letras\n");
    printf("3. Desplegar serie numero\n");
    printf("4. Salir\n");
    printf("Ingrese opcion: ");
}


//CONTROL DE MI MENU
int main(void) {

    int opcion = 0; //Guarda la opcion numerica que elegui en el menu

    do {
        mostrarMenu();

        opcion = leerEntero("");

        switch (opcion) {

            case 1:
                validarFecha();
                Limpiar();
                break;

            case 2:
                SerieLetras();
                Limpiar();
                break;

            case 3:
                SerieNumeros();
                Limpiar();
                break;

            case 4:
                printf("Salir...\n");
                break;

            default:
                printf("Opcion no valida\n");
                Limpiar();
                break;
        }

    } while (opcion != 4); // Repite el menu hasta que el usuario elija la opcion 4

    return 0; //Indica al sistema operativo que el programa termino sin errores
}


// LIMPIA LOS CARACTERES SOBRANTES
void limpiarEntrada(void) {

    int c; // Variable auxiliar

    while ((c = getchar()) != '\n' && c != EOF) { //End Of File, que suele ser -1 , Descarta culauqier cosa que no sea un numero
    }
}

/* ESPERA ENTER Y LIMPIA LA PANTALLA */
void Limpiar(void) {

    printf("\nPresione Enter para continuar...");
    getchar();

    system("cls");//limpia la pantalla
}


/* LEE UN ENTERO Y RECHAZA LETRAS, SIMBOLOS Y DECIMALES */
int leerEntero(const char* mensaje) {

    int numero;
    int estado;
    int c;

    while (1) {

        printf("%s", mensaje);

        estado = scanf("%d", &numero);

        if (estado == 1) {

            c = getchar();

            while (c == ' ' || c == '\t' || c == '\r') {
                c = getchar();
            }

            if (c == '\n' || c == EOF) {
                return numero;
            }

            printf("Entrada no valida. Ingrese solo un numero entero.\n");
            limpiarEntrada();

        } else {

            printf("Entrada no valida. Ingrese solo un numero entero.\n");
            limpiarEntrada();
        }
    }
}


/* OBTIENE LOS DIAS MAXIMOS DE CADA MES */
int obtenerDiasMaximoMes(int mes) {

    if (mes == 2) {
        return 29; // Febrero permite hasta 29 dias
    }
    else if (mes == 4 || mes == 6 || mes == 9 || mes == 11) {
        return 30; // Abril, junio, septiembre y noviembre tienen 30 dias
    }
    else {
        return 31; // Enero, marzo, mayo, julio, agosto, octubre y diciembre tienen 31 dias
    }
}


//PARA EL MES
const char* obtenerNombreMes(int mes) {

    switch (mes) {

        case 1: return "Enero";
        case 2: return "Febrero";
        case 3: return "Marzo";
        case 4: return "Abril";
        case 5: return "Mayo";
        case 6: return "Junio";
        case 7: return "Julio";
        case 8: return "Agosto";
        case 9: return "Septiembre";
        case 10: return "Octubre";
        case 11: return "Noviembre";
        case 12: return "Diciembre";

        default: return "Mes invalido";
    }
}


//VALIDAR LAS FECHAS
void validarFecha(void) {

    int anio;
    int mes;
    int dia;
    int maxDias;

    do {
        anio = leerEntero("Ingrese anio (1900 - 2015): ");

    } while (anio < 1900 || anio > 2015); //LIMITE 1


    do {
        mes = leerEntero("Ingrese mes (1 - 12): ");

    } while (mes < 1 || mes > 12); //LIMITE 2


    maxDias = obtenerDiasMaximoMes(mes);


    do {
        printf("Ingrese dia (1 - %d): ", maxDias);

        dia = leerEntero("");

    } while (dia < 1 || dia > maxDias); //LIMITE 3


    printf("\nFecha valida: %d de %s de %d\n",
           dia, obtenerNombreMes(mes), anio);
}



//SERIE NUMERICA
void SerieNumeros(void) {

    int n = 0; //Cantidad de terminos solicitados
    int i = 0; //Contador de terminos ya impresos

    int sub1 = 1; //Reinicia la primera subsecuencia en 1 cada vez que entra
    int sub2 = 5; //Reinicia la segunda subsecuencia en 5 cada vez que entra

    do {

        n = leerEntero("Ingrese cantidad de terminos: ");

    } while (n < 0);


    while (i < n) {

        printf("%d", sub1); //Imprime termino de la primera subsecuencia

        sub1 = sub1 + 2;  ///Aumenta en 2 para el siguiente termino de esa subsecuencia
        i++; //Registra un termino impreso

        if (i < n) {

            printf(", %d", sub2); //Imprime termino de la segunda subsecuencia

            sub2 = sub2 + 2; //Aumenta en 2 para el siguiente termino de esa subsecuencia
            i++; //Registra el segundo termino
        }

        if (i < n) {
            printf(", "); //Agrega coma separador
        }
    }

    printf("\n");
}


//LA SERIE DE LETRAS
void SerieLetras(void) {

    int n;
    int i;
    int bloque;
    int cantidadEnFila;

    char numerador = 'a';
    char denominador = 'b';


    /* SOLICITA UN ENTERO POSITIVO */
    do {

        n = leerEntero("Ingrese cantidad de terminos: ");

        if (n <= 0) {
            printf("Error. Ingrese un entero positivo.\n");
        }

    } while (n <= 0);


    /* REPITE LOS BLOQUES DE 25 TERMINOS */
    for (bloque = 0; bloque < n; bloque = bloque + 25) {

        // DETERMINA CUANTOS TERMINOS SE IMPRIMEN
        if (n - bloque > 25) {
            cantidadEnFila = 25;
        }
        else {
            cantidadEnFila = n - bloque;
        }


        // PRIMERA FILA
        for (i = 0; i < cantidadEnFila; i++) {

            printf(" %c ", numerador);

            if (numerador == 'y') {
                numerador = 'a';
            }
            else {
                numerador = numerador + 2;
            }
        }

        printf("\n");


        // SEGUNDA FILA
        for (i = 0; i < cantidadEnFila; i++) {

            printf("---");
        }

        printf("\n");


        // TERCERA FILA
        for (i = 0; i < cantidadEnFila; i++) {

            printf(" %c ", denominador);

            if (denominador == 'z') {
                denominador = 'b';
            }
            else {
                denominador = denominador + 2;
            }
        }

        printf("\n\n");
    }
}

