#include <stdio.h>
int main() {
    float Suma = 0;
    float h, max, min, media;
    int n = 0;
    printf("Ingrese el valor de h (ingrese un numero negativo para terminar): ");
    scanf("%f", &h);
    while (h >= 0) {
        if (n == 0) {
            max = h;
            min = h;
        }
        else {
            if (h > max) {
                max = h;
            }
            if (h < min) {
                min = h;
            }
        }
        Suma = Suma + h;
        n = n + 1;
        printf("Ingrese el siguiente valor de h: ");
        scanf("%f", &h);
    }
    if (n == 0) {
        printf("No se introdujeron datos\n");
    }
    else {
        media = Suma / n;
        printf("media: %.2f\n", media);
        printf("máximo: %.2f\n", max);
        printf("mínimo: %.2f\n", min);
    }

    return 0;
}
