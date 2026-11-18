#include <stdio.h>

void vector() {
    int n;
    do { printf("Tamano del vector (>0): "); scanf("%d", &n); } while (n <= 0);
    int v[n];
    printf("Ingrese %d enteros:\n", n);
    for(int i = 0; i < n; i++) { printf("  [%d]: ", i); scanf("%d", &v[i]); }
    printf("Vector: [ "); for(int i = 0; i < n; i++) printf("%d ", v[i]); printf("]\n");
}

void matriz() {
    int f, c;
    do { printf("Filas (>0): "); scanf("%d", &f); } while (f <= 0);
    do { printf("Columnas (>0): "); scanf("%d", &c); } while (c <= 0);
    float m[f][c];
    printf("Elementos (>= 0):\n");
    for(int i = 0; i < f; i++)
        for(int j = 0; j < c; j++)
            do { printf("  [%d][%d]: ", i, j); scanf("%f", &m[i][j]); } while (m[i][j] < 0);
    printf("Matriz:\n");
    for(int i = 0; i < f; i++) {
        printf("  | ");
        for(int j = 0; j < c; j++) printf("%8.2f ", m[i][j]);
        printf(" |\n");
    }
}

int main() {
    int op;
    do {
        printf("\n1. Vector\n2. Matriz\n3. Salir\nElija (1-3): ");
        scanf("%d", &op);
        if (op == 1) vector();
        else if (op == 2) matriz();
        else if (op == 3) printf("\n¡Hasta pronto!\n");
        else printf("\nOpcion no valida.\n");
    } while (op != 3);
    return 0;
}
