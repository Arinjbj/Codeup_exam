#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	int b, n, i = 1, temp1, temp2 = 1000001;
	scanf("%d %d", &b, &n);
	while(1)
	{
		temp1 = abs(b - pow(i, n));
		if(temp1 < temp2) temp2 = temp1;
		else break;
		i++;
	}
	printf("%d", --i);
	return 0;
}
