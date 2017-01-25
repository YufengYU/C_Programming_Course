#include <stdio.h>

#define MAXN 1001

int main()
{
    int a[1001];
    int n,i, diff;
    scanf("%d%d%d",&a[1],&a[2],&n);
    diff = a[2]-a[1];
    for (i=3; i<=n; i++)
        a[i] = a[i-1]+diff;
    printf("%d\n",a[n]);
    return 0;
}
