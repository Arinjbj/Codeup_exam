#include <stdio.h>
#include <math.h>

int main()
{
	double a, b, c, i, result;
	scanf("%lf %lf %lf", &a, &b, &c);
	i = (b * b) - (4 * a * c);
	if(i == 0)
	{
		result = -b / (2 * a);
		if(result == -0) result = 0;
		printf("%.2f", result);
	}
	else if(i > 0)
	{
		printf("%.2f\n", (-b + sqrt(i)) / (2 * a));
		printf("%.2f\n", (-b - sqrt(i)) / (2 * a));
	}
	else
	{
		i = -i;
		printf("%.2f+%.2fi\n", -b / (2 * a), fabs(sqrt(i) / (2 * a)));
		printf("%.2f-%.2fi\n", -b / (2 * a), fabs(sqrt(i) / (2 * a)));
	}
	return 0;
}
