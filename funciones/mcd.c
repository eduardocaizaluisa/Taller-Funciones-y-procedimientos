#include <stdio.h>

int calcularMCD(int a, int b);
void imprimirMCD(int a, int b);

int main() {
    int num1 = 54; // Primer número
    int num2 = 24; // Segundo número
    imprimirMCD(num1, num2);
    return 0;
}

int calcularMCD(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

void imprimirMCD(int a, int b) {
    int mcd = calcularMCD(a, b);
    printf("El MCD de %d y %d es %d\n", a, b, mcd);
}
