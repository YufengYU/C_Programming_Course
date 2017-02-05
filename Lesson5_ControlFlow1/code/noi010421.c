#include <stdio.h>
#include <math.h>

int main()
{
    int n,x,y;
    scanf("%d%d%d",&n,&x,&y);
    if (y>=x*n)
        printf("0\n");
    else
        printf("%d\n",n-((y+x-1)/x));
    return 0;
}
