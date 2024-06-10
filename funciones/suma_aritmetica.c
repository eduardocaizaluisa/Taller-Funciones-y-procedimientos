#include <stdio.h>

int sumaSerieAritmetica(int n);

int main() {
    int n = 5; // Cambia el valor de 'n' por el número de términos que deseas sumar
    int suma = sumaSerieAritmetica(n);
    printf("La suma de los primeros %d términos de la serie aritmética es: %d\n", n, suma);
    return 0;
}

int sumaSerieAritmetica(int n) {
    int primer_termino = 1; // Cambia este valor si el primer término de la serie es diferente
    int ultimo_termino = n;
    int suma = (n * (primer_termino + ultimo_termino)) / 2;
    return suma;
}
