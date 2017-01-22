#include <stdio.h>

int main()
{
    int N;
    scanf("%d",&N);
    int i;
    for (i=1; i<=N; i++)
    {
        int n;
        scanf("%d",&n);
        int w,k;
        w = 0;
        for (k=1; k<=n; k++)
            w = w + k*(k+1)*(k+2)/2;
        printf("%d %d %d\n",i,n,w);
    }
    return 0;
}
