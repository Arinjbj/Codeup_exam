#include <stdio.h>

int isnum(char a)
{
	if(a >= 48 && a <= 57) return 1;
	else return 0;
}

int main()
{
	char str[40];
	int kind, mul = 0, sum = 0;
	int temp1 = 0;	//AR'A'R중 R저장 
	int temp2 = 0;	//AR 저장 
	scanf("%s", str);
	
	for(int i = 0; str[i]; i++)
	{
		if(isnum(str[i]) == 1)
		{
			mul += str[i] - 48;
			if(isnum(str[i + 1]) == 1) mul *= 10;
			continue;
		}
		switch(str[i])
		{
			case 'I':
				kind = 1;
				break;
			
			case 'V':
				kind = 5;
				break;
				
			case 'X':
				kind = 10;
				break;
				
			case 'L':
				kind = 50;
				break;
				
			case 'C':
				kind = 100;
				break;
				
			case 'D':
				kind = 500;
				break;
				
			case 'M':
				kind = 1000;
				break;
				
			default:
				break;
		}
		if(mul == 0) mul = 1;
		temp1 < kind ? (sum -= temp2) : (sum += temp2);
		temp1 = kind;
		temp2 = kind * mul;
		mul = 0;
	}
	sum += temp2;
	printf("%d", sum);
	return 0;
}
