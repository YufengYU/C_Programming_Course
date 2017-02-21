#include <stdio.h>

int main()
{
    int remain = 0, saved = 0, cost;
    int i;
    for (i=1; i<=12; i++)
    {
        remain = remain + 300;
        scanf("%d",&cost);
        if (remain<cost)
        {
            printf("%d", -i);
            return 0;
        }
        remain -= cost;
        saved += remain/100*100;
        remain = remain - remain/100*100;
    }

    remain = remain + saved/10*12;
    printf("%d",remain);
    return 0;
}
