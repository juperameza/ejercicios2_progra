//JUan Pedro Ramirez Meza 20171112 6H
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 1500 // Definimos N como 1000 y aumentaremos de 100 en 100 hasta 1000
int is_prime(int n)
{
    int i;


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
      int i;
    /* code */
    printf("Los números primos menores a %d con metodo de fuerza bruta  son:\n", N);
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
