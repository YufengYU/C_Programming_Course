#include <stdio.h>

int main()
{
    int a[100000];
    int i;
    a[1] = 1;
    a[2] = 1;
    for (i=3; i<=30; i++)
        a[i] = a[i-1]+a[i-2];
    printf("Fibonacci %d: %d\n", 30, a[30]);
    return 0;
}
