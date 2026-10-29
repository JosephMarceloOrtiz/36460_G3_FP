#include <stdio.h>

int main()
{
    int n;
    unsigned long long factorial = 1;

    printf("Ingrese un entero entre 0 y 20: ");
    scanf("%d", &n);

    if (n < 0 || n > 20) {
        printf("Ingrese un numero entre 0 y 20.\n");
    } else {
        for (int i = 1; i <= n; i++) {
            factorial = factorial * i;
        }

        printf("%d! = %llu\n", n, factorial);
    }

    return 0;
}
