#include <stdio.h>

void fibonacci(int n);

int main() {
    int n = 10; // Cambia el valor de 'n' según la cantidad de elementos que desees imprimir
    printf("Los primeros %d elementos de la serie de Fibonacci son:\n", n);
    fibonacci(n);
    return 0;
}

void fibonacci(int n) {
    int a = 0, b = 1, c;
    if (n >= 1) {
        printf("%d ", a);
    }
    if (n >= 2) {
        printf("%d ", b);
    }
    for (int i = 3; i <= n; i++) {
        c = a + b;
        printf("%d ", c);
        a = b;
        b = c;
    }
    printf("\n");
}
