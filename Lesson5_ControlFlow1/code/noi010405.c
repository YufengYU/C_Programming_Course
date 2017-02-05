#include <stdio.h>

int main()
{
    unsigned int a;
    int b;
    scanf("%u%d",&a,&b);
    if (b<0 || a>b)
        printf(">\n");
    else if (a==b)
        printf("=\n");
    else
        printf("<\n");
    return 0;
}
