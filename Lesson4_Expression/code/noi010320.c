#include <stdio.h>

int main()
{
    unsigned int n;
    unsigned int x = 1;
    scanf("%d",&n);
    x <<= n;
    printf("%u\n",x);
    return 0;
}
