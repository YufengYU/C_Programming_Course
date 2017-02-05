#include <stdio.h>
#include <math.h>

int main()
{
    double a,b,c;
    double x1,x2;
    double eps = 1e-10;
    scanf("%lf%lf%lf",&a,&b,&c);
    if (b>0-eps && b<0+eps)
        b = -eps;

    if (b*b > 4*a*c+eps)
    {
        x1 = (-b + sqrt(b*b-4*a*c))/(2*a);
        x2 = (-b - sqrt(b*b-4*a*c))/(2*a);
        printf("x1=%.5lf;x2=%.5lf\n",x1,x2);
    }
    else if (b*b < 4*a*c-eps)
    {
        x1 = -b / (2*a); //Êµ²¿
        x2 = sqrt(4*a*c-b*b) / (2*a); //Ðé²¿
        printf("x1=%.5lf+%.5lfi;x2=%.5lf-%.5lfi\n",
               x1,x2,x1,x2);
    }
    else
        printf("x1=x2=%.5lf\n", -b / (2*a));
    return 0;
}
