#include <stdio.h>

int main()
{
    int total,cur;
    // forѭ��ʾ��
    total = 0;
    for (cur=1; cur<=100; cur++)
        total = total+cur;
    printf("use for: %d\n",total);

    // whileѭ��ʾ��
    total = 0;
    cur = 1;
    while (cur<=100)
    {
        total = total+cur;
        cur = cur+1; //��Ҫ������
    }
    printf("use while: %d\n", total);

    return 0;
}
