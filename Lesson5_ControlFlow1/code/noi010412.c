#include <stdio.h>

int main()
{
    double tw,tb;
    int a;
    scanf("%d",&a);

    // �����������
    tw = a/1.2;
    tb = a/3.0 + 27 + 23;
    double eps = 1e-8;
    if (tw>tb+eps)
        printf("Bike\n");
    else if (tw<tb-eps)
        printf("Walk\n");
    else
        printf("All\n");

    //�򵥷���
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
