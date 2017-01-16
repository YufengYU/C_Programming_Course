#include <stdio.h>

int main()
{
    int n,m,c,p;
    while (scanf("%d%d%d%d",&n,&m,&p,&c)!=EOF)
    {
        if (n==0 && m==0 && p==0 && c==0)
            break;
        printf("%d\n",n-m+p);
    }
    return 0;
}
