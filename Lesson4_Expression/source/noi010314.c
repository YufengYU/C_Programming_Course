#include <stdio.h>
#include <math.h>

#define pi 3.14159
#define NEED 20.0/1000

int main()
{
    double r,h;
    double v;
    scanf("%lf%lf",&h,&r);
    h = h/100.0;
    r = r/100.0;
    v = pi*r*r*h;
    printf("%d\n", (int)ceil(NEED/v));
    return 0;
}
