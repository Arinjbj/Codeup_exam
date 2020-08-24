#include <stdio.h>

#define LEN 1600

int main()
{
	int arr[LEN] = {1}, temp[LEN] = {}, kind, cnt = 0, a, z, i, j, k;
	scanf("%d %d", &a, &z);
	a--;
	z--;
	for(i = 0;i <= z;i++)
	{
		if(i == 0 && a == 0)
		{
			printf("%d\n", arr[i]);
			continue;
		}
		else if(i == 0)
		{
			continue;
		}
		for(j = 0,k = 0;arr[j] != 0;j++)
		{
			kind = arr[j];
			cnt++;
			if(arr[j] != arr[j + 1])
			{
				temp[k] = kind;
				k++;
				temp[k] = cnt;
				k++;
				cnt = 0;
			}
		}
		for(j = 0;j < LEN;j++) arr[j] = temp[j];
		for(j = 0;j < LEN;j++) temp[j] = 0;
		if(i >= a)
		{
			for(j = 0;arr[j] != 0;j++)
			{
				printf("%d", arr[j]);
				printf(" ");
			}
			printf("\n");
		}
	}
	return 0;
}
