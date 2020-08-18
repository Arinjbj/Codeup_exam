#include <stdio.h>

int main()
{
	int a, b, i, one;
	char str[8];
	scanf("%d %d", &a, &b);
	
	for(one = 0;a <= b;a++)
	{
		sprintf(str, "%d", a);
		for(i = 0;str[i];i++)
		{
			if(str[i] == '1') one++;
		}
	}
	printf("%d", one);
	return 0;
}
