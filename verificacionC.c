#include <stdio.h>  
// Incluye la biblioteca estándar de entrada y salida, necesaria para usar printf y scanf

// Función que analiza un número y clasifica sus características
void num_type(float n) {
    // Verifica si el número es entero comparando su parte entera con el valor original
    if ((int)n == n) {
        printf("El numero es entero\n");
    } else {
        printf("El numero es decimal\n");
    }

    // Determina si el número es positivo, negativo o cero
    if (n > 0) {
        printf("El numero es positivo\n");
    } else if (n < 0) {
        printf("El numero es negativo\n");
    } else {
        printf("El numero es cero\n");
    }

    // Verifica si el número está en el rango de 0 a 100, inclusivo
    if (n >= 0 && n <= 100) {
        printf("El numero esta entre 0 y 100\n");
    } else {
        printf("El numero no esta entre 0 y 100\n");
    }
}

int main() {
    float num;  // Variable para almacenar el número ingresado por el usuario

    printf("Ingresa un numero:\n");

    // Lee un número de tipo float desde la entrada estándar
    // scanf devuelve 1 si se leyó correctamente un número, de lo contrario devuelve otra cosa
    if (scanf("%f", &num) != 1) {
        printf("Error: no ingresaste un numero valido\n");
        return 1; // Termina el programa con código de error
    }

    // Llama a la función num_type para analizar y mostrar las características del número
    num_type(num);

    return 0; // Finaliza el programa correctamente
}
