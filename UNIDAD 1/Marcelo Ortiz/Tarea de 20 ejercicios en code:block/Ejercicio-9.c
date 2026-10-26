#include <stdio.h>
#include <stdbool.h>
int main() {
    int a, b, aux, num, i;
    bool primo;
    printf("Ingrese el valor de a: ");
    scanf("%d", &a);
    printf("Ingrese el valor de b: ");
    scanf("%d", &b);
    if (a > b) {
        aux = a;
        a = b;
        b = aux;
    }
    num = a;
    while (num <= b) {
        if (num > 1) {
            primo = true;
            i = 2;
            while (i < num && primo == true) {

                if (num % i == 0) {
                    primo = false;
                } else {
                    i = i + 1;
                }
            }
            if (primo == true) {
                printf("%d\n", num);
            }
        }

        num = num + 1;
    }

    return 0;
}
