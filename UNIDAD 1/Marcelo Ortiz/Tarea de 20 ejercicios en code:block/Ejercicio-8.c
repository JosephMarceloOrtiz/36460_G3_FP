#include <stdio.h>
#include <stdbool.h>

int main() {
    int n, i;
    bool primo;

    printf("Ingrese un numero mayor que 1: ");
    scanf("%d", &n);

    if (n <= 1) {
        printf("El numero debe ser mayor que 1\n");
    }
    else {
        primo = true;
        i = 2;
        while (i < n && primo == true) {
            if (n % i == 0) {
                primo = false;
            }
            else {
                i = i + 1;
            }
        }

        if (primo == true) {
            printf("Es primo\n");
        }
        else {
            printf("No es primo\n");
        }
    }

    return 0;
}
