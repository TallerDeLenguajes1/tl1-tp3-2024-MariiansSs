#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define C 12
#define F 5

int main()
{
    srand(time(NULL));

    int matriz[F][C];

    for (int i = 0; i < F; i++)
    {
        for (int j = 0; j < C; j++)
        {
            matriz[i][j] = rand() % (50000 - 10000 + 1) + 10000; 
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}