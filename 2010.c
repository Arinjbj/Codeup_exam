#include <stdio.h>
#include <math.h>

int main()
{
	int b, n, i, temp1, temp2 = 1000001;
	scanf("%d %d", &b, &n);
	for(i = 1;;i++)
	{
		temp1 = abs(b - pow(i, n));
		if(temp1 < temp2) temp2 = temp1;
		else break;
	}
	printf("%d", --i);
	return 0;
}
