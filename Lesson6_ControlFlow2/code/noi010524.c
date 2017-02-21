#include <stdio.h>

int main()
{
    int a, b, n;
    int best = 0, cur = 0;
    scanf("%d",&n);
    int i;
    for (i=0; i<n; i++)
    {
        scanf("%d%d",&a,&b);
        if (a>=90 && a<=140 && b>=60 && b<=90)
        {
            cur++;
            if (cur>best)
                best = cur;
        }else
            cur = 0;
    }
    printf("%d",best);
    return 0;
}
