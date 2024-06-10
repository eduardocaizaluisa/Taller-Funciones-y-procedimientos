#include <stdio.h>

int multiplicarPorSumas(int a, int b);
int potenciaPorSumas(int base, int exponente);
void imprimirPotencia(int base, int exponente);

int main() {
    int base = 2, exponente = 3;
    imprimirPotencia(base, exponente);
    return 0;
}

int multiplicarPorSumas(int a, int b) {
    int resultado = 0;
    for (int i = 0; i < b; i++) {
        resultado += a;
    }
    return resultado;
}

int potenciaPorSumas(int base, int exponente) {
    int resultado = 1;
    for (int i = 0; i < exponente; i++) {
        resultado = multiplicarPorSumas(resultado, base);
    }
    return resultado;
}

void imprimirPotencia(int base, int exponente) {
    int resultado = potenciaPorSumas(base, exponente);
    printf("%d^%d = %d\n", base, exponente, resultado);
}
