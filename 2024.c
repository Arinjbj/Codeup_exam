#include <stdio.h>
#include <string.h>
#include <uchar.h>

int main()
{
	char num[12] = {};
	int len, len4;
	char unit4[7] = u8"만억";
	char unit[10] = u8"십백천";
	char knum[28] = u8"일이삼사오육칠팔구";

	scanf("%s", num);

	len = strlen(num) - 1;
	len4 = len / 4;
	for(int i = 0; i <= len; i++) num[i] -= '0';
	for(int i = 0; len >= 0; i++)
	{
		if(num[i] != 0 && ((len % 4 != 0 && num[i] != 1) || (len % 4 == 0))) printf(u8"%c%c%c", knum[(num[i] - 1) * 3], knum[(num[i] - 1) * 3 + 1],  knum[(num[i] - 1) * 3 + 2]); 
		if(num[i] != 0 && len % 4 != 0) printf(u8"%c%c%c", unit[(len % 4 - 1) * 3], unit[(len % 4 - 1) * 3 + 1], unit[(len % 4 - 1) * 3 + 2]);
		else if(len4 != 0 && len % 4 == 0) 
		{
			printf(u8"%c%c%c", unit4[(len4 - 1) * 3], unit4[(len4 - 1) * 3 + 1], unit4[(len4 - 1) * 3 + 2]);
			len4--;
		}
		len--;
	}
	return 0;
}
