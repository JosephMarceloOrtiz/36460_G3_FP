#include <stdio.h>

int main() {

    int c, D, h, min, seg;

    printf("Ingrese el valor de c (segundos): ");
    scanf("%d", &c);

    D = c / 86400;
    c = c % 86400;
    h = c / 3600;
    c = c % 3600;
    min = c / 60;
    seg = c % 60;
    printf("Dias: %d\n", D);
    printf("Horas: %d\n", h);
    printf("Minutos: %d\n", min);
    printf("Segundos: %d\n", seg);

    return 0;
}
