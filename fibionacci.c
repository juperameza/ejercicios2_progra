#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 1000 // Definimos N como 20

int main()
{
    clock_t start, end;
    double time_taken;
    int i;
    double fib1 = 0, fib2 = 1, fib3;
    start = clock();
    // Imprimir los primeros N valores de la serie de Fibonacci
    printf("Los primeros %d valores de la serie de Fibonacci mediante iteraciones son:\n", N);
    printf("%f %f ", fib1, fib2);
    for(i=3; i<=N; i++)
    {
        fib3 = fib1 + fib2;
        printf("%f ", fib3);
        fib1 = fib2;
        fib2 = fib3;
    }
    end = clock();
    time_taken = (double)(end - start) / CLOCKS_PER_SEC;
    printf("\n Tiempo de ejecución: %f segundos\n", time_taken);
    return 0;
}
