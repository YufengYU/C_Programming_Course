#include <stdio.h>

int main()
{
    int w, c; // w: weight, c: cost
    char ch;
    scanf("%d %c",&w,&ch);
    c = 0;
    if (w<=1000)
        c = 8;
    else
    {
        w -= 1000;
        c = 8;
        c += (w+500-1)/500 * 4;
    }
    if (ch=='y')
        c += 5;
    printf("%d\n",c);
    return 0;
}
