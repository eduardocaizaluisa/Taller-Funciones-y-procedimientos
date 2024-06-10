#include <stdio.h>
#include <math.h>

unsigned long long productoSerieGeometrica(int primer_termino, int razon, int n);

int main() {
    int primer_termino = 2; // Primer término de la serie
    int razon = 2;          // Razón de la serie
    int n = 4;              // Número de términos a considerar

    unsigned long long producto = productoSerieGeometrica(primer_termino, razon, n);
    printf("El producto de los primeros %d términos de la serie geométrica es: %llu\n", n, producto);

    return 0;
}

unsigned long long productoSerieGeometrica(int primer_termino, int razon, int n) {
    unsigned long long producto = 1;

    for (int i = 0; i < n; i++) {
        producto *= primer_termino * pow(razon, i);
    }

    return producto;
}
