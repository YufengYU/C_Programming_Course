#include <stdio.h>

int main()
{
    int n,k;
    int total;
    while (scanf("%d%d",&n,&k)!=EOF)
    {
        total = n;
        while (n>=k)
        {
            total = total+n/k;
            n = n - n/k*k + n/k;
        }
        printf("%d\n",total);
    }
    return 0;
}
