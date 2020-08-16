#include <stdio.h>
#include <math.h>

int main()
{
	double b, n;
	scanf("%lf %lf", &b, &n);
	printf("%d", (int)(pow(b, 1 / n) + 0.5));
	return 0;
}