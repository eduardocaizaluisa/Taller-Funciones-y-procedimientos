#include <stdio.h>

int sumarParesHastaN(int n);

int main() {
    int n = 10; // Cambia el valor de 'n' por el número hasta el cual deseas sumar los pares
    int suma = sumarParesHastaN(n);
    printf("La suma de todos los números pares desde 1 hasta %d es: %d\n", n, suma);
    return 0;
}

int sumarParesHastaN(int n) {
    int suma = 0;
    for (int i = 2; i <= n; i += 2) {
        suma += i;
    }
    return suma;
}
