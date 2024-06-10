#include <stdio.h>

int invertirNumero(int numero);

void imprimirNumeroInvertido(int numero);

int main() {
    int numero = 12567;
    imprimirNumeroInvertido(numero);
    return 0;
}

int invertirNumero(int numero) {
    int inverso = 0;
    while (numero != 0) {
        inverso = inverso * 10 + numero % 10;
        numero /= 10;
    }
    return inverso;
}

void imprimirNumeroInvertido(int numero) {
    int inverso = invertirNumero(numero);
    printf("El inverso de %d es %d\n", numero, inverso);
}
