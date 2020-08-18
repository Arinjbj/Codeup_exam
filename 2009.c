#include <stdio.h>

int main()
{
	int a, b, i;
	scanf("%d %d", &a, &b);
	for(i = 0;;i++)
	{
		a -= b;
		if(a < 0) break;
	}
	printf("%d", i);
	return 0;
}
