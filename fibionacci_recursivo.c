//JUan Pedro Ramirez Meza 20171112 6H 
#include <stdio.h>
#include <time.h>

#define N 40 // Definimos N como 100 y aumentaremos de 100 en 100 hasta 1000

int fibonacci(double n) {
    if (n == 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main() {
    double i;

    clock_t t_ini, t_fin;
    double secs;

    t_ini = clock();

    printf("Los primeros %d términos de la serie de Fibonacci son:\n", N);

    for (i = 0; i < N; ++i) {
        printf("%d, ", fibonacci(i));
    }

    t_fin = clock();

    secs = (double)(t_fin - t_ini) / CLOCKS_PER_SEC;
    printf("\nEl tiempo de ejecución fue de %f segundos.\n", secs);

    return 0;
}
