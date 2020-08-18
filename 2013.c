#include <stdio.h>

int main()
{
	double kind, sum;
	int num, i;
	char str[16];
	kind = sum = num = 0;
	
	scanf("%s", str);
	
	for(i = 0;str[i];i++)
	{
		if(str[i] >= 48 && str[i] <= 57)
		{
			num += str[i] - 48;
			if(str[i + 1] >= 48 && str[i + 1] <= 57) num *= 10;
			else sum += kind * (num - 1);
		}
		else
		{
			num = 0;
			switch(str[i])
			{
				case 'H':
				if(str[i + 1] == 'e')
				{
					i++;
					kind = 4;
				}
				else kind = 1;
				break;
			
				case 'B':
				kind = 10.8;
				break;
				
				case 'C':
				if(str[i + 1] == 'l')
				{
					i++;
					kind = 35.5;
				}
				else kind = 12;
				break;
				
				case 'N':
				if(str[i + 1] == 'e')
				{
					i++;
					kind = 20.2;
				}
				else if(str[i + 1] == 'a')
				{
					i++;
					kind = 23;
				}
				else kind = 14;
				break;
				
				case 'O':
				kind = 16;
				break;
				
				case 'F':
				kind = 19;
				break;
				
				case 'P':
				kind = 31;
				break;
				
				case 'S':
				kind = 32;
				break;
				
				case 'K':
				kind = 39.1;
				break;
				
				default:
				break;
			}
			sum += kind;
		}
	}
	printf("%g", sum);
	return 0;
}