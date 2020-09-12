#include <stdio.h>

int main()
{
	int n;
	scanf("%d", &n);
	printf("{");
	int i = n;
	for(int i = n;;) {
		printf("%d", i);
		++i;
		if (i >= n + n) break;
		printf(", ");
	}
	printf("}");
	return 0;
}