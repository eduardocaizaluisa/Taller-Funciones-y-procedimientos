#include <stdio.h>
#include <stdbool.h>

bool esPrimo(int numero);
int contarPrimosHastaN(int n);

int main() {
    int n = 10; // Cambia el valor de 'n' por el número hasta el cual deseas contar los números primos
    int cantidad = contarPrimosHastaN(n);
    printf("Hay %d números primos desde 1 hasta %d\n", cantidad, n);
    return 0;
}

bool esPrimo(int numero) {
    if (numero <= 1) {
        return false;
    }
    for (int i = 2; i * i <= numero; i++) {
        if (numero % i == 0) {
            return false;
        }
    }
    return true;
}

int contarPrimosHastaN(int n) {
    int contador = 0;
    for (int i = 2; i <= n; i++) {
        if (esPrimo(i)) {
            contador++;
        }
    }
    return contador;
}
