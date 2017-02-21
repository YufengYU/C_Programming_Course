#include <stdio.h>

int main()
{
    int gold=0, silver=0, bronze=0;
    int n;
    scanf("%d",&n);
    int i;
    for (i=0; i<n; i++)
    {
        int gI, sI, bI;
        scanf("%d%d%d",&gI,&sI,&bI);
        gold += gI;
        silver += sI;
        bronze += bI;
    }
    printf("%d %d %d %d",gold, silver, bronze, gold+silver+bronze);
    return 0;
}
