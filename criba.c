#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 20000


int main()
{
    clock_t start, end;
     double time_taken;
      int i, j;
    int primes[N+1]; // Creamos una lista para almacenar los números primos
    primes[0] = 0; // Marcar 0 y 1 como no primos
    primes[1] = 0;
    printf("Los números primos menores a con metodo de criba de eratostenes %d son:\n", N);
    start = clock();
    // Inicializar la lista con 1 (todos son primos inicialmente)
    for(i=2; i<=N; i++)
    {
        primes[i] = 1;
    }

    // Marcar los números no primos
    for(i=2; i*i<=N; i++)
    {
        if(primes[i] == 1)
        {
            for(j=i*i; j<=N; j+=i)
            {
                primes[j] = 0;
            }
        }
    }

    // Imprimir los números primos

    for(i=2; i<=N; i++)
    {
        if(primes[i] == 1)
        {
            printf("%d ", i);
        }
    }
    end = clock();
    time_taken = (double)(end - start) / CLOCKS_PER_SEC;
    printf("\n Tiempo de ejecución: %f segundos\n", time_taken);
    return 0;
}
