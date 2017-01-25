#include <stdio.h>

int main()
{
    int a;
    scanf("%d",&a);
    printf("%d%d%d\n",a%10, a/10%10, a/100%10);
    return 0;
}
