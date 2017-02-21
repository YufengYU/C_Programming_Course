#include <stdio.h>

int main()
{
    int days;
    scanf("%d",&days);
    int day = 1, a = 1, total = 0;
    int dayInCircle = 0;
    for (day=1; day<=days; day++)
    {
        total += a;
        dayInCircle++;
        if (dayInCircle>=a)
        {
            a++;
            dayInCircle = 0;
        }
    }
    printf("%d",total);
    return 0;
}
