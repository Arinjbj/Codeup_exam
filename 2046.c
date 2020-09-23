#include <stdio.h>
#include <string.h>

int main()
{
	char base[501][1001] = {};
	char precious[501][1001] = {};
	char str1[1001] = {}, str2[1001] = {};
	char* tok1, *tok2;
	int topcnt = 0, i;

	scanf("%s", str1);
	scanf("%s", str2);
	tok1 = strtok(str1, "/");
	strcpy(base[1], tok1);
	for (i = 2; ; ++i)
	{
		tok1 = strtok(NULL, "/");
		if (tok1 == NULL) break;
		strcpy(base[i], tok1);
	}
	tok2 = strtok(str2, "/");
	strcpy(precious[1], tok2);
	for (i = 2; ; ++i)
	{
		tok2 = strtok(NULL, "/");
		if (tok2 == NULL) break;
		strcpy(precious[i], tok2);
	}
	for(i = 1; strcmp(base[i], precious[i]) == 0; ++i){}
	for (int temp = i; base[temp][0] != 0; ++topcnt) 
	{
		++temp;
	}
	--topcnt;
	if (topcnt == 0)
	{
		printf("./");
	}
	else
	{
		for (int j = 1; j <= topcnt; ++j)
		{
			printf("../");
		}
	}
	while (1)
	{
		if (precious[i + 1][0] == 0)
		{
			printf("%s", precious[i]);
			break;
		}
		else
		{
			printf("%s/", precious[i]);
			++i;
		}
	}
	return 0;
}