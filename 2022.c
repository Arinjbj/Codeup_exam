#include <stdio.h>
#include <string.h>

int recyclecheck(char *order, char *ready);

int main()
{
	char ready[101][101] = {};
	char order[32] = {};
	int n, i, tfcnt = 0;
	
	scanf("%d", &n);
	scanf("%s", order);
	for(i = 0;i < n;i++)
	{
		scanf("%s", ready[i]);
	}
	for(i = 0;i < n;i++)
	{
		tfcnt += recyclecheck(order, ready[i]);
	}
	printf("%d", tfcnt);
	return 0;
}

int recyclecheck(char *order, char *ready)
{
	int tf = 0, l, k, cnt = 0, lpcnt = 0;
	int orderlen = strlen(order);
	int readylen = strlen(ready);
	
	for(int itv = 1;itv * (orderlen - 1) <= readylen;itv++)
	{
		for(int i = 0;i < readylen;i++)
		{
			k = 0;
			cnt = 0;
			lpcnt = 0;
			for(int j = i;j < readylen && lpcnt < orderlen;j += itv, lpcnt++)
			{
				if(ready[j] == order[k])
				{
					cnt++;
					k++;
				}
				if(cnt == orderlen) return 1;
			}
		}
	}
	return 0;
}
