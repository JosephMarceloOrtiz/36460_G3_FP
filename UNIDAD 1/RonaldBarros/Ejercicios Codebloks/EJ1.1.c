#include <stdio.h>

int main() {
    float a, b, media;

    printf ("Ingrese el primer numero: ");
    scanf  ("%f",  &a);

    printf ("Ingrese el segundo numero: ");
    scanf ("%f", &b);

    media = (a + b) / 2;

    printf("La media es: %f\n", media);

    return 0;
}
