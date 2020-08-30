#include <stdio.h>
#include <string.h>
#include <uchar.h>

int main()
{
	char num[12] = {};
	int len, len4, check0 = 0;
	char unit4[7] = "만억";
	char unit[10] = "십백천";
	char knum[28] = "일이삼사오육칠팔구";

	scanf("%s", num);

	len = strlen(num) - 1;
	len4 = len / 4;
	for(int i = 0; i <= len; i++) num[i] -= '0';
	if(num[0] == 0)
	{
		printf("영");
		return 0;
	}
	for(int i = 0; len >= 0; i++)
	{
		if(num[i] != 0) 
		{
			printf("%c%c%c", knum[(num[i] - 1) * 3], knum[(num[i] - 1) * 3 + 1],  knum[(num[i] - 1) * 3 + 2]); 
			check0 = 1;
		}
		if(num[i] != 0 && len % 4 != 0) printf("%c%c%c", unit[(len % 4 - 1) * 3], unit[(len % 4 - 1) * 3 + 1], unit[(len % 4 - 1) * 3 + 2]);
		else if(len4 != 0 && len % 4 == 0 && check0 != 0) 
		{
			printf("%c%c%c", unit4[(len4 - 1) * 3], unit4[(len4 - 1) * 3 + 1], unit4[(len4 - 1) * 3 + 2]);
			len4--;
			check0 = 0;
		}
		len--;
	}
	return 0;
}
