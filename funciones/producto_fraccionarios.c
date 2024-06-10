#include <stdio.h>

double productoSerieFraccionaria(int n);

int main() {
    int n = 3; // Cambia el valor de 'n' por el número hasta el cual deseas calcular el producto
    double producto = productoSerieFraccionaria(n);
    printf("El producto de la serie de números fraccionarios desde 1 hasta 1/%d es: %.6f\n", n, producto);
    return 0;
}

double productoSerieFraccionaria(int n) {
    double producto = 1.0;
    for (int i = 1; i <= n; i++) {
        producto *= 1.0 / i;
    }
    return producto;
}
