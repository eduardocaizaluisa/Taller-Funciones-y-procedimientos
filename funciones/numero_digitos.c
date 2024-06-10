#include <stdio.h>

int contarDigitos(int numero);

int main() {
    int numero = 12567; // Cambia el valor de 'numero' por el número que deseas contar los dígitos
    int digitos = contarDigitos(numero);
    printf("%d tiene %d dígitos\n", numero, digitos);
    return 0;
}

int contarDigitos(int numero) {
    int contador = 0;
    do {
        contador++;
        numero /= 10;
    } while (numero != 0);
    return contador;
}
