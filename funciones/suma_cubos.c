#include <stdio.h>

int sumarCubosHastaN(int n);

int main() {
    int n = 3; // Cambia el valor de 'n' por el número hasta el cual deseas sumar los cubos
    int suma = sumarCubosHastaN(n);
    printf("La suma de los cubos de los primeros %d números naturales es: %d\n", n, suma);
    return 0;
}

int sumarCubosHastaN(int n) {
    int suma = 0;
    for (int i = 1; i <= n; i++) {
        suma += i * i * i;
    }
    return suma;
}
