#include <stdio.h>
#include <string.h>

int main()
{
	int n, a, b, len;
	char str[5][600], temp[600];
	char* ptr;

	scanf("%d", &n);

	for (int i = 0; i < n; i++) scanf("%s", str[i]);
	for (int i = 0; i < n; i++)
	{
		strcpy(temp, str[i]);
		ptr = strtok(str[i], "+");
		a = ptr[0] - '0';
		b = ptr[4] - '0';
		printf("%d*x^%d", a * b, b - 1);
		while (1)
		{
			ptr = strtok(NULL, "+");
			if (ptr == NULL) break;
			a = ptr[0] - '0';
			b = ptr[4] - '0';
			printf("+%d*x^%d", a * b, b - 1);
		}
		
		printf(" ");

		strcpy(str[i], temp);
		ptr = strtok(str[i], "+");
		a = ptr[0] - '0';
		b = ptr[4] - '0';
		printf("%d*x^%d", a / (b + 1),b + 1);
		while (1)
		{
			ptr = strtok(NULL, "+");
			if (ptr == NULL) break;
			a = ptr[0] - '0';
			b = ptr[4] - '0';
			printf("+%d*x^%d", a / (b + 1), b + 1);
		}
		printf("+c\n");
	}
	return 0;
}