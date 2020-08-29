#include <stdio.h>
#include <string.h>

int main()
{
	int n, len;
	char num[12] = {};

	scanf("%d", &n);

	while(n > 26)
	{
		n -= 26;
		num[1]++;
		for(int i = 0; i < 12; i++)
		{
			if(num[i] > 26)
			{
				num[i + 1] += 1;
				num[i] -= 26;
			}
		}
	}
	num[0] = n;
	len = strlen(num);
	for(int i = len - 1; i >= 0; i--)
	{
		num[i] += 64;
		printf("%c", num[i]);
	}
	return 0;
}
