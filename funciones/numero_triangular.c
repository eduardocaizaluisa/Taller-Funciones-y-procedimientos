#include <stdio.h>

int calcularNumeroTriangular(int n);

int main() {
    int n = 4; // Cambia el valor de 'n' por el número de posición del número triangular que deseas calcular
    int numero_triangular = calcularNumeroTriangular(n);
    printf("El %d-ésimo número triangular es: %d\n", n, numero_triangular);
    return 0;
}

int calcularNumeroTriangular(int n) {
    return (n * (n + 1)) / 2;
}
