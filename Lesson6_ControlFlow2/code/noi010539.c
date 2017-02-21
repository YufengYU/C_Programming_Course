#include <stdio.h>

int checkNoSeven(int x)
{
    if (x%7==0)
        return 0;
    while (x>0)
    {
        if (x%10==7)
            return 0;
        x /= 10;
    }
    return 1;
}

int main()
{
    int n,i;
    int total = 0;
    scanf("%d",&n);
    for (i=1; i<=n; i++)
    {
        if (checkNoSeven(i))
            total += i*i;
    }
    printf("%d",total);
    return 0;
}
