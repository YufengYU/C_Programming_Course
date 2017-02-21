#include <stdio.h>

int main()
{
    int a,b,c;
    for (a=0; a<7; a++)
    {
        for (b=0; b<7; b++)
        {
            for (c=0; c<7; c++)
            {
                if (a==0 && b==0 && c==0)
                    continue;

                int v7 = (a*7+b)*7+c;
                int v9 = (c*9+b)*9+a;
                if (v7==v9)
                {
                    printf("%d\n",v7);
                    printf("%d%d%d\n",a,b,c);
                    printf("%d%d%d\n",c,b,a);
                    return 0;
                }
            }
        }
    }
    return 0;
}
