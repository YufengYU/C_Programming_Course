#include <stdio.h>

int main()
{
    int n,i,dist;
    int speed[11];
    int time[11];
    while (scanf("%d",&n)!=EOF)
    {
        if (n==-1)
            break;
        time[0] = 0;
        for (i=1; i<=n; i++)
            scanf("%d%d",&speed[i],&time[i]);

        dist = 0;
        for (i=1; i<=n; i++)
            dist = dist + (time[i]-time[i-1])*speed[i];

        printf("%d miles\n",dist);
    }
    return 0;
}
