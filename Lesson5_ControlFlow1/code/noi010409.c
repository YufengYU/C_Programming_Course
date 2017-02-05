#include <stdio.h>

int main()
{
    int a;
    scanf("%d",&a);
    int flag = 0;
    if (a%3==0)
    {
        printf("3 ");
        flag = 1;
    }
    if (a%5==0)
    {
        printf("5 ");
        flag = 1;
    }
    if (a%7==0)
    {
        printf("7 ");
        flag = 1;
    }
    if (flag==0)
        printf("n");
    return 0;
}
