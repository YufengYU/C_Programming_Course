
#include <stdio.h>
#include <math.h>

int isPrime(int x)
{
    int i;
    for (i=2; i*i<=x; i++)
    {
        if (x%i==0)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int n;
    scanf("%d",&n);
    int i = 1;
    while (n>0)
    {
        i++;
        if (isPrime(i))
            n--;
    }
    printf("%d",i);
    return 0;
}
