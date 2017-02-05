#include <stdio.h>

int main()
{
    int x,y;
    char op;
    scanf("%d %d %c",&x,&y,&op);
    switch (op)
    {
    case '+':
        printf("%d\n",x+y);
        break;
    case '-':
        printf("%d\n",x-y);
        break;
    case '*':
        printf("%d\n",x*y);
        break;
    case '/':
        if (y==0)
            printf("Divided by zero!");
        else
            printf("%d\n",x/y);
        break;
    default:
        printf("Invalid operator!");
    }

    return 0;
}
