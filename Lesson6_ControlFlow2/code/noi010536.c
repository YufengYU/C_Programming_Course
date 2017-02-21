#include <stdio.h>

int main()
{
	float x;
	int n;
	float xp = 0.0;
	float ans = 0.0;
    scanf("%f %d",&x,&n);
	int i;
	xp = 1.0;
	for (i=0; i<=n; i++)
	{
		ans += xp;
		xp *= x;
	}
    printf("%.2f",ans);
    return 0;
}
