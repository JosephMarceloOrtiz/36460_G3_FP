#include <stdio.h>

int main()
{
    int a, b;

    printf("Ingrese el primer numero: ");
    scanf("%d", &a);

    printf("Ingrese el segundo numero: ");
    scanf("%d", &b);

    if (b == 0) {
        printf("No se puede dividir para cero.\n");
    } else if (a % b == 0) {
        printf("%d es divisible para %d\n", a, b);
    } else {
        printf("%d no es divisible para %d\n", a, b);
    }

    return 0;
}
