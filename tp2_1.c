// codigo a completar
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 20

int main()
{
    int i;
    double vt[N];

    // Semilla para generar números aleatorios diferentes cada vez
    srand(time(NULL));

    for (i = 0; i < N; i++)
    {
        vt[i] = 1 + rand() % 100;
    }

    for (i = 0; i < N; i++)
    {
        printf("%.2f ", vt[i]);
    }

    printf("\n");
    return 0;
}
