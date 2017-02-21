#include <stdio.h>

int main()
{
    int m,n,i;
    int total = 0;
    scanf("%d%d",&m,&n);
    for (i=m; i<=n; i++)
    {
        if (i%17==0)
            total += i;
    }
    printf("%d",total);
    return 0;
}
