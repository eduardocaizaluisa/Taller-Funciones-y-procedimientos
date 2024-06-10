#include <stdio.h>


int calcularSumaDigitos(int numero);


void imprimirSumaDigitos(int numero);


int main() {
    int numero = 12567;
    imprimirSumaDigitos(numero);
    return 0;
}


int calcularSumaDigitos(int numero) {
    int suma = 0;
    for (; numero != 0; numero /= 10) {
        suma += numero % 10;
    }
    return suma;
}


void imprimirSumaDigitos(int numero) {
    int suma = calcularSumaDigitos(numero);
    printf("Suma de los dígitos de %d: %d\n", numero, suma);
}
