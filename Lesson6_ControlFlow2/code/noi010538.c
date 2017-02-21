#include <stdio.h>

int main()
{
    int n, i, c;
    scanf("%d",&n);
    if (n==0)
    {
        printf("0");
        return 0;
    }
    for (i=n; i>=1; i--)
    {
        scanf("%d",&c);
        printf("%d ",i*c);
    }
    return 0;
}
