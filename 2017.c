#include <stdio.h>
#include <string.h>

int main()
{
	int n, k, i, temp;
	char result[32];
	scanf("%d %d", &n, &k);
	
	for(i = 0;n != 0;i++)
	{
		temp = n % k;
		n /= k;
		if(temp < 10) result[i] = temp + 48;
		else result[i] = temp + 55;
	}
	for(i = strlen(result) - 1;i >= 0;i--)
	{
		printf("%c", result[i]);
	}
	return 0;
}