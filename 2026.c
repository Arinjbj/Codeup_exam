#include <stdio.h>
#include <string.h>

int main()
{
	char xtob['Z'][5] = {};
	char x[50001];
	int len;

	strcpy(xtob['0'], "0000");
	strcpy(xtob['1'], "0001");
	strcpy(xtob['2'], "0010");
	strcpy(xtob['3'], "0011");
	strcpy(xtob['4'], "0100");
	strcpy(xtob['5'], "0101");
	strcpy(xtob['6'], "0110");
	strcpy(xtob['7'], "0111");
	strcpy(xtob['8'], "1000");
	strcpy(xtob['9'], "1001");
	strcpy(xtob['A'], "1010");
	strcpy(xtob['B'], "1011");
	strcpy(xtob['C'], "1100");
	strcpy(xtob['D'], "1101");
	strcpy(xtob['E'], "1110");
	strcpy(xtob['F'], "1111");

	scanf("%s", x);
	len = strlen(x);
	for(int i = 0; i < len; i++)
	{       
		printf("%s", xtob[x[i]]);
		printf(" ");
	}
	return 0;
}
