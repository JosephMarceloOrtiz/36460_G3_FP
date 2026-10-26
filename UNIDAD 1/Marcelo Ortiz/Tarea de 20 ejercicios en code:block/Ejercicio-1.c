#include <stdio.h>

int main() {
    float a, b, media;

    printf("Ingrese el valor de a: ");
    scanf("%f", &a);

    printf("Ingrese el valor de b: ");
    scanf("%f", &b);

    media = (a + b) / 2;

    printf("La media es: %.2f\n", media);

    return 0;
}
