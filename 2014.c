#include <stdio.h>

int main()
{
	int star, tri, squa, tf = 0;
	star = 1;
	for(tri = 0;tri < 10;tri++)
	{
		for(squa = 0;squa < 10;squa++)
		{
			if((star * 100 + tri * 10 + squa) - (star * 10 + tri) == squa * 11)
			{
				tf = 1;
				break;
			}
		}
		if(tf != 0) break;
	}
	printf("%d%d%d-%d%d=%d%d", star, tri, squa, star, tri, squa, squa);
	return 0;
}