#include <stdio.h>

int main()
{
    double x,y;
    scanf("%lf",&x);
    if (x>=0 && x<5)
        y = -x+2.5;
    else if (x>=5 && x<10)
        y = 2-1.5*(x-3)*(x-3);
    else
        y = x/2-1.5;
    printf("%.3lf\n",y);
    return 0;
}
