#include <stdio.h>

int main() {
    int n, suma = 0, d = 1;


    printf("Introduce un numero: ");
    scanf("%d", &n);


    while (d < n) {

        if (n % d == 0) {
            suma = suma + d;
        }
        d = d + 1;
    }


    if (suma == n) {
        printf("Es perfecto\n");
    } else {
        printf("No es perfecto\n");
    }

    return 0;
}
