#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a, b, type = 0, isposi, i;
	scanf("%d %d", &a, &b);

	if (b == 0)
	{
		if (a == 0)
		{
			printf("x+0");
		}
		else
		{
			if (a > 0) printf("x+%d\nx+0", a);
			else printf("x+0\nx+%d", a);
		}
	}
	else if (b > 0)
	{
		isposi = (a > 0) ? 1 : 0;
		a = abs(a);
		for (i = 1; i * 2 <= b; i++)
		{
			if (i * (a - i) == b)
			{
				if (i == a - i) type = 2;
				else type = 1;
				break;
			}
		}
		if (type == 1)
		{
			if (isposi == 1) printf("x+%d\nx+%d", i, a - i);
			else printf("x-%d\nx-%d", a - i, i);
		}
		else if (type == 2)
		{
			if (isposi == 1) printf("x+%d", i);
			else printf("x-%d", i);
		}
		else printf("-1");
	}
	else
	{
		isposi = (a > 0) ? 1 : 0;
		a = abs(a);
		b = abs(b);
		for (i = 1; i + a <= b; i++)
		{
			if (i * (i + a) == b)
			{
				type = 1;
				break;
			}
		}
		if (type == 1)
		{
			if (isposi == 1) printf("x-%d\nx+%d", i, i + a);
			else printf("x-%d\nx+%d", i + a, i);
		}
		else printf("-1");
	}
	return 0;
}