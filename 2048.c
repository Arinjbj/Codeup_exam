#include <stdio.h>
#include <math.h>

int main()
{
	int sum = 0, temp, tf = 0;
	for(int i = 0; i < 16; ++i)
	{
		scanf("%d", &temp);
		sum += temp;
	}
	for (int i = 1; i <= 11; ++i)
	{
		if (pow(2, i) == sum)
		{
			tf = 1;
			break;
		}
	}
	printf("%s", tf ? "yes" : "no");
	return 0;
}