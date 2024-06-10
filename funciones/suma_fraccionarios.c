#include <stdio.h>

double sumarSerieFraccionaria(int n);

int main() {
    int n = 3; // Cambia el valor de 'n' por el número hasta el cual deseas sumar la serie
    double suma = sumarSerieFraccionaria(n);
    printf("La suma de la serie de números fraccionarios desde 1 hasta 1/%d es: %.6f\n", n, suma);
    return 0;
}

double sumarSerieFraccionaria(int n) {
    double suma = 0.0;
    for (int i = 1; i <= n; i++) {
        suma += 1.0 / i;
    }
    return suma;
}
