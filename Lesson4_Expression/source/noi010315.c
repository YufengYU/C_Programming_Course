#include <stdio.h>

int main()
{
    int n,x,y;
    scanf("%d%d%d",&n,&x,&y);
    printf("%d\n",n-((y+x-1)/x));
    return 0;
}
