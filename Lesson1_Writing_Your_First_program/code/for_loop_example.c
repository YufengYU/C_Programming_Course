#include <stdio.h>

int main()
{
    int total,cur;
    // for循环示意
    total = 0;
    for (cur=1; cur<=100; cur++)
        total = total+cur;
    printf("use for: %d\n",total);

    // while循环示意
    total = 0;
    cur = 1;
    while (cur<=100)
    {
        total = total+cur;
        cur = cur+1; //重要！！！
    }
    printf("use while: %d\n", total);

    return 0;
}
