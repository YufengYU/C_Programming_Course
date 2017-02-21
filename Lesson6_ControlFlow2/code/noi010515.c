#include <stdio.h>

int main()
{
    int R, M, Y;
    double scale, total;
    scanf("%d%d%d",&R,&M,&Y);
    scale = 1 + R*0.01;
    total = M;
    int i;
    for (i=0; i<Y; i++)
    {
        total *= scale;
    }
    printf("%d", (int)total);
    return 0;
}
