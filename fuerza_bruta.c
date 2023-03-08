#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 20000

int is_prime(int n)
{
    int i;
    
    if(n < 2)
    {
        return 0;
    }
    
    for(i=2; i<=n/2; i++)
    {
        if(n%i == 0)
        {
            return 0;
        }
    }
    
    return 1;
}


int main()
{
    clock_t start, end;
     double time_taken;
      int i, j;
    int primes[N+1]; // Creamos una lista para almacenar los números primos
    primes[0] = 0; // Marcar 0 y 1 como no primos
    primes[1] = 0;
    /* code */
    printf("Los números primos menores a con metodo de fuerza bruta %d son:\n", N);
    start = clock();
    for(i=2; i<=N; i++)
    {
        if(is_prime(i))
        {
            printf("%d ", i);
        }
    }
    end = clock();
    time_taken = (double)(end - start) / CLOCKS_PER_SEC;
    printf("\n Tiempo de ejecución: %f segundos\n", time_taken);

    return 0;
}
