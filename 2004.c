#include <stdio.h>

int main()
{
	int bx, by, ox, oy, i, j, sign = 0;
	scanf("%d %d", &bx, &by);
	scanf("%d %d", &ox, &oy);
	
	for(i = 0;i < (bx * ox);i++)
	{
		if(i % ox == 0) sign ^= 0b10;
		for(j = 0;j < (by * oy);j++)
		{
			if(j == 0) sign = (sign & 0b10) + (sign >> 1);
			if(j % oy == 0) sign ^= 1;
			if((sign & 1) == 0) printf("X");
			else printf(".");
		}
		printf("\n");
	}
	return 0;
}
