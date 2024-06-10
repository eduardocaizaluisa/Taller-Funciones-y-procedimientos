#include <stdio.h>

unsigned long long factorial(int n);

int main() {
    int numero = 5; // Cambia el valor de 'numero' por el número del que deseas calcular el factorial
    unsigned long long resultado = factorial(numero);
    printf("%d! = %llu\n", numero, resultado);
    return 0;
}

unsigned long long factorial(int n) {
    unsigned long long resultado = 1;
    for (int i = 1; i <= n; i++) {
        resultado *= i;
    }
    return resultado;
}
