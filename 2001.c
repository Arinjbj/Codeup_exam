#include <stdio.h>

int main()
{
	int pasta, juice, i, pmin, jmin;
	pmin = jmin = 2100000000;
	for(i = 0;i < 3;i++)
	{
		scanf("%d", &pasta);
		if(pmin > pasta) pmin = pasta;
	}
	for(i = 0;i < 2;i++)
	{
		scanf("%d", &juice);
		if(jmin > juice) jmin = juice;
	}
	printf("%.1lf", (double)(pmin + jmin) * 1.1);
	return 0;
}
