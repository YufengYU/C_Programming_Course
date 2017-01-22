#include <stdio.h>
#include <memory.h>

template <typename T>

void printBinary(T a)
{
    int len = sizeof(T);
    int i,j;
    for (i=0; i<len; i++)
    {
        unsigned char uch;
        memcpy(&uch, ((unsigned char*)&a)+i, 1);
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
    printBinary(a);
    printf("\n");
    return 0;
}
