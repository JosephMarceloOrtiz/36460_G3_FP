#include <stdio.h>

int main() {
    int num1, num2, resto;
    printf("Ingrese el valor de num1: ");
    scanf("%d", &num1);

    printf("Ingrese el valor de num2: ");
    scanf("%d", &num2);
    if (num2 == 0) {
        printf("No se puede dividir entre cero\n");
    }
    else {
        resto = num1 % num2;
        if (resto == 0) {
            printf("Es divisible\n");
        }
        else {
            printf("No es divisible\n");
        }
    }

    return 0;
}
