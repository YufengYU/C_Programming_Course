#include <stdio.h>

#define MAXLEN 15
int main()
{
    int n;
    scanf("%d",&n);
    if (n<0)
    {
        printf("-");
        n = -n;
    }

    int len = 0;
    int a[MAXLEN];
    while (n>0)
    {
        a[len] = n%10;
        n /= 10;
        len++;
    }

    int p = 0;
    while (a[p]==0 && p<len-1)
        p++;

    while (p<len)
    {
        printf("%d",a[p]);
        p++;
    }
    return 0;
}
