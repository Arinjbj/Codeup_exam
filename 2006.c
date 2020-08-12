#include <stdio.h>

int main()
{
	int a, b, c, d, s, i, Nikky, Byron, walk1, walk2, sign;
	Nikky = Byron = walk1 = walk2 = sign = 0;
	scanf("%d\n%d\n%d\n%d\n%d", &a, &b, &c, &d, &s);
	for(i = 0;i < s;i++)
	{
		if((sign & 1) == 0)
		{
			Nikky++;
			walk1++;
			if(walk1 == a)
			{
				walk1 = 0;
				sign ^= 1;
			}
		}
		else if((sign & 1) == 1)
		{
			Nikky--;
			walk1++;
			if(walk1 == b)
			{
				walk1 = 0;
				sign ^= 1;
			}
		}
		if((sign & 2) == 0)
		{
			Byron++;
			walk2++;
			if(walk2 == c)
			{
				walk2 = 0;
				sign ^= 2;
			}
		}
		else if((sign & 2) == 2)
		{
			Byron--;
			walk2++;
			if(walk2 == d)
			{
				walk2 = 0;
				sign ^= 2;
			}
		}
	}
	
	if(Byron == Nikky) printf("Tied");
	else Byron > Nikky ? printf("Byron") : printf("Nikky");
	return 0;
}