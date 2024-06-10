#include <stdio.h>

int raizCubicaPorRestas(int numero);
void imprimirRaizCubica(int numero);

int main() {
    int numero = 27;
    imprimirRaizCubica(numero);
    return 0;
}

int raizCubicaPorRestas(int numero) {
    int contador = 0;
    int suma = 0;
    
    while (suma < numero) {
        contador++;
        suma += contador * contador * contador;
    }
    
    if (suma == numero) {
        return contador;
    } else {
        return -1; // Indica que no es una raíz cúbica exacta
    }
}

void imprimirRaizCubica(int numero) {
    int raiz = raizCubicaPorRestas(numero);
    if (raiz == -1) {
        printf("El número %d no tiene una raíz cúbica exacta.\n", numero);
    } else {
        printf("La raíz cúbica de %d es %d\n", numero, raiz);
    }
}
