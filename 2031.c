#include <stdio.h>
#include <string.h>
#include <math.h>

#define ALPLEN 26

int main()
{
	char arr[7];
	int sum = 0;
	int j = 0;

	scanf("%s", arr);

	int len = strlen(arr);
	for (int i = len - 1; i >= 0; i--)
	{
		arr[i] -= '@';
		sum += pow(ALPLEN, j) * arr[i];
		j++;
	}
	printf("%d", sum);
	return 0;
}