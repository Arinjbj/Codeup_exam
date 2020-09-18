#include <stdio.h>
#include <string.h>

int main()
{
	char str[51] = {}, result[51] = {};
	int loc = 0, len;
	scanf("%s", str);
	len = strlen(str);
	for(int i = 0;i < len;++i)
	{
		switch(str[i])
		{
			case '0':
				result[loc] = '0';
				++loc;
				break;
			case '1':
				result[loc] = '1';
				++loc;
				break;
			case '2':
				result[loc] = '2';
				++loc;
				break;
			case 'A':
				--loc;
				result[loc] = 0;
				break;
			case 'B':
				loc -= 2;
				result[loc] = result[loc + 1] = 0;
				break;
			case 'C':
				memset(result, 0, 51);
				loc = 0;
				break;
			default:
				break;
		}
	}
	printf("%s", result);
	return 0;
}