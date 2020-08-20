#include <stdio.h>
#include <stdlib.h>

#define LEN 10
//0  1  2  3  4  5  6  7  8  9
//f, o, r, t, y, e, n, s, i, x ¼ø¼­
//forty+ten+ten=sixty

void swap(int * a, int * b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

void permu(int * arr, int a)
{
	int i;
	if(a == LEN - 1)
	{
		if((arr[0] * 10000 + arr[1] * 1000 + arr[2] * 100 + arr[3] * 10 + arr[4]) + (2 * (arr[3] * 100 + arr[5] * 10 + arr[6])) == (arr[7] * 10000 + arr[8] * 1000 + arr[9] * 100 + arr[3] * 10 + arr[4]))
		{
			printf("%d%d%d%d%d+%d%d%d+%d%d%d=%d%d%d%d%d", arr[0], arr[1], arr[2], arr[3], arr[4], arr[3], arr[5], arr[6], arr[3], arr[5], arr[6], arr[7], arr[8], arr[9], arr[3], arr[4]);
			return;
		}
	}
	else
	{
		for(i = a;i < LEN;i++)
		{
			swap(arr + a, arr + i); 
			permu(arr, a + 1);
			swap(arr + a, arr + i);
		}
	}
}

int main()
{
	int * arr = (int *)calloc(LEN, sizeof(int));
	int i;
	for(i = 0; i < LEN; i++) arr[i] = i;
	permu(arr, 0);
	return 0;
}
