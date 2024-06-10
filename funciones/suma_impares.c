#include <stdio.h>

int sumarImparesHastaN(int n);

int main() {
    int n = 10; // Cambia el valor de 'n' por el número hasta el cual deseas sumar los impares
    int suma = sumarImparesHastaN(n);
    printf("La suma de todos los números impares desde 1 hasta %d es: %d\n", n, suma);
    return 0;
}

int sumarImparesHastaN(int n) {
    int suma = 0;
    for (int i = 1; i <= n; i += 2) {
        suma += i;
    }
    return suma;
}
