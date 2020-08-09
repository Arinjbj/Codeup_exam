#include <stdio.h>
#include <string.h>

int solve(int p, int k, char c);

int main()
{
	int i, k;
	char str[32];
	scanf("%d\n%s", &k, str);
	for(i = 0;i < strlen(str);i++)
	{
		printf("%c", solve(i + 1, k, str[i]));
	}
	return 0;
}

int solve(int p, int k, char c)
{
	c -= 3 * p + k;
	while(c < 65)
	{
		c += 26;
	}
	return c;
}