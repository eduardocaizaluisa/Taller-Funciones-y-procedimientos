#include <stdio.h>
#include <stdbool.h>

bool esPrimo(int numero);
void verificarPrimo(int numero);

int main() {
    int numero = 7; // Cambia el valor de 'numero' por el número que deseas verificar
    verificarPrimo(numero);
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

void verificarPrimo(int numero) {
    if (esPrimo(numero)) {
        printf("%d es primo\n", numero);
    } else {
        printf("%d no es primo\n", numero);
    }
}
