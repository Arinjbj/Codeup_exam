#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int n, cri = 1, temp;
	char bin[11] = {}, num[6] = {};
	
	scanf("%s", &num);
	for (int i = strlen(num); i != 0; i--) cri *= 10;
	n = atoi(num);
	for (int i = 0; i < 10; i++)
	{
		n *= 2;
		bin[i] = '0' + (n / cri);
		n %= cri;
	}
	printf("%s", bin);
	return 0;
}