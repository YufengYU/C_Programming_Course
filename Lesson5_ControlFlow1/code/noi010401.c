#include <stdio.h>

int main()
{
    int N;
    scanf("%d",&N);
    if (N>0)
        printf("positive\n");
    else if (N==0)
        printf("zero\n");
    else
        printf("negative\n");
    return 0;
}
