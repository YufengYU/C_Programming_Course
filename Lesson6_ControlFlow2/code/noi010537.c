#include <stdio.h>

int main()
{
    int M, N, X;
    scanf("%d%d%d",&M,&N,&X);
    while (X*N>=M)
    {
        X -= (M+N-1)/N;
        N += M/N;
    }
    printf("%d",N);
    return 0;
}
