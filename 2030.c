#include <stdio.h>
#include <string.h>

int main()
{
	char screen[31][61];
	char name[61];
	int n, x1, y1, x2, y2, nameloc;
	for (int i = 1; i < 31; i++)
		for (int j = 1; j < 61; j++)
			screen[i][j] = '.';

	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		scanf("%s %d %d %d %d", name, &x1, &y1, &x2, &y2);
		for (int j = y1; j <= y2; j++)
		{
			if (j == y1)
			{
				nameloc = 0;
				for (int k = x1; k <= x2; k++)
				{
					if (k == x1 || k == x2)
					{
						screen[j][k] = '+';
					}
					else
					{
						if (nameloc >= strlen(name))
							screen[j][k] = '-';
						else
							screen[j][k] = name[nameloc];
						nameloc++;
					}
				}
			}
			else if (j == y2)
			{
				for (int k = x1; k <= x2; k++)
				{
					if (k == x1 || k == x2)
					{
						screen[j][k] = '+';
					}
					else
					{
						screen[j][k] = '-';
					}
				}
			}
			else
			{
				for (int k = x1; k <= x2; k++)
				{
					if (k == x1 || k == x2)
					{
						screen[j][k] = '|';
					}
					else
					{
						screen[j][k] = ' ';
					}
				}
			}
		}
	}
	
	for (int i = 1; i < 31; i++)
	{
		for (int j = 1; j < 61; j++)
			printf("%c", screen[i][j]);
		printf("\n");
	}

	return 0;
}