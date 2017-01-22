#include <stdio.h>
#include <memory.h>

void printBinary(void* a, int len)
{
    int temp = 1;
    int i = 0, j = 0;
    for (i=0; i<len; i++)
    {
        unsigned char uch;
        memcpy(&uch, ((unsigned char*)a)+i, 1);
        for (j=0; j<8; j++)
        {
            if (uch&1)
                printf("1");
            else
                printf("0");
            uch = uch>>1;
        }
        printf(" ");
    }
}


int main()
{
    int a = 213128314;
    printBinary(&a, sizeof(a));
    printf("\n");
    return 0;
}
