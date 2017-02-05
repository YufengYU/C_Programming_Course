#include <stdio.h>

int main()
{
    double tw,tb;
    int a;
    scanf("%d",&a);

    // 正常计算求解
    tw = a/1.2;
    tb = a/3.0 + 27 + 23;
    double eps = 1e-8;
    if (tw>tb+eps)
        printf("Bike\n");
    else if (tw<tb-eps)
        printf("Walk\n");
    else
        printf("All\n");

    //简单方法
    /*
    if (a>100)
        printf("Bike\n");
    else if (a<100)
        printf("Walk\n");
    else
        printf("All\n");
    */

    return 0;
}
