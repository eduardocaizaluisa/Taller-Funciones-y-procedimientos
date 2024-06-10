#include <stdio.h>

int sumarCuadradosHastaN(int n);

int main() {
    int n = 3; // Cambia el valor de 'n' por el número hasta el cual deseas sumar los cuadrados
    int suma = sumarCuadradosHastaN(n);
    printf("La suma de los cuadrados de los primeros %d números naturales es: %d\n", n, suma);
    return 0;
}

int sumarCuadradosHastaN(int n) {
    int suma = 0;
    for (int i = 1; i <= n; i++) {
        suma += i * i;
    }
    return suma;
}
