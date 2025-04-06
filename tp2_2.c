#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 20

int main()
{
    int i;
    double vt[N];
    double *ptr;

    // Semilla para generar números aleatorios
    srand(time(NULL));

    for (i = 0, ptr = vt; i < N; i++, ptr++)
    {
        *ptr = 1 + rand() % 100;
    }

    for (i = 0, ptr = vt; i < N; i++, ptr++)
    {
        printf("%f ", *ptr);
    }

    printf("\n");
    return 0;
}
