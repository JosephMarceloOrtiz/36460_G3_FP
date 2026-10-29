#include <stdio.h>
#include <math.h>

int main()
{
    int n, raiz;

    printf("Ingrese un numero entero no negativo: ");
    scanf("%d", &n);

    if (n >= 0) {
        raiz = (int)sqrt(n);
        printf("La raiz cuadrada entera es: %d\n", raiz);
    } else {
        printf("El numero debe ser no negativo.\n");
    }

    return 0;
}
