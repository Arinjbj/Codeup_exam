#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int len, i, j, cnt = 0;
	char *num, *result;
	
	scanf("%d\n", &len);
	
	num = (char*)calloc(len + 1, sizeof(char));
	result = (char*)calloc(len + (len / 3), sizeof(char));
	
	scanf("%s", num);
	for(i = len - 1, j = 0; i >= 0; i--)
	{
		result[j] = num[i];
		j++;
		cnt++;
		if(cnt % 3 == 0 && i != 0)
		{
			result[j] = ',';
			j++;
		}
	}
	free(num);
	printf("%s\n", result);
	for(j = strlen(result) - 1;j >= 0;j--)
	{
		printf("%c", result[j]);
	}
	free(result);
	return 0;
}