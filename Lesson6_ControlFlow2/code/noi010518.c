#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int i;

    int total, valid;
    scanf("%d%d",&total,&valid);
    double x = valid*1.0/total;

    for (i=1; i<n; i++)
    {
        int total, valid;
        scanf("%d%d",&total,&valid);
        double y = valid*1.0/total;
        if (y-x>0.05)
            printf("better\n");
        else if (x-y>0.05)
            printf("worse\n");
        else
            printf("same\n");
    }
    return 0;
}
