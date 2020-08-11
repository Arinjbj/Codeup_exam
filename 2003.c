#include <stdio.h>
#include <string.h>

int main()
{
	char icon[3][3];
	int size, i, j;
	strncpy(icon, "*x* xx* *", 9);
	scanf("%d", &size);
	for(i = 0;i < (3 * size);i++)
	{
		for(j = 0;j < (3 * size);j++)
		{
			printf("%c", icon[i / size][j / size]);
			printf(" ");
		}
		printf("\n");
	}
	return 0;
}