#include <stdio.h>

#define pi 3.14159

int main()
{
    double r;
    scanf("%lf",&r);
    printf("%.4lf %.4lf %.4lf\n", 2*r, 2*pi*r, pi*r*r);
    return 0;
}
