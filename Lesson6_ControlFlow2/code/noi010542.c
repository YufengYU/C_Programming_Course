#include <stdio.h>

int main()
{
    int rows, cols;
    char ch;
    int solid;
    scanf("%d %d %c %d", &rows, &cols, &ch, &solid);

    int i,j;
    for (i=0; i<rows; i++)
    {
        for (j=0; j<cols; j++)
        {
            if (i==0 || j==0 || i==rows-1 || j==cols-1 || solid)
                printf("%c",ch);
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}
