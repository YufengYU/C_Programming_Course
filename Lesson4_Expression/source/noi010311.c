#include <stdio.h>

#define pi 3.14159

int main()
{
    double a,b;
    scanf("%lf%lf",&a,&b);
    printf("%g\n", a-floor(a/b)*b);
    return 0;
}
