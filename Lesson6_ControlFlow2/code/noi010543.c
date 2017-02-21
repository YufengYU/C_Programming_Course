#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    scanf("%d",&n);
    int i;
    for (i=2; i*i<=n; i++)
    {
        if (n%i==0)
        {
            printf("%d",n/i);
            return 0;
        }
    }
    return 0;
}
