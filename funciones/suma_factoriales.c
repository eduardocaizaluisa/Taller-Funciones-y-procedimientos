#include <stdio.h>

int factorial(int n);
int sumaFactoriales(int n);

int main() {
    int n = 3; // Cambia el valor de 'n' por el número de elementos hasta el cual deseas calcular la suma
    int suma = sumaFactoriales(n);
    printf("La suma de los factoriales de los primeros %d números es: %d\n", n, suma);
    return 0;
}

int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    return n * factorial(n - 1);
}

int sumaFactoriales(int n) {
    int suma = 0;
    for (int i = 1; i <= n; i++) {
        suma += factorial(i);
    }
    return suma;
}
