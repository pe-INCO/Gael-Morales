#include <stdio.h>

int main() {
    char nombre[50];
    printf("Ingresa tu nombre: ");
    scanf("%49s", nombre);
    printf("Su nombre es %s\n", nombre);
    return 0;
}