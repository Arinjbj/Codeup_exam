#include <stdio.h>
#include <string.h>

int main()
{
	char ready[101][32];
	char order[32];
	int n, i, j, k, l, loopcnt, tf;
	int itv, itvmax, charcnt, tfcnt = 0;
	int readylen, orderlen;
	
	scanf("%d", &n);
	scanf("%s", order);
	for(i = 0;i < n;i++)
	{
		scanf("%s", ready[i]);
	}
	//한 간판씩 검사
	for(i = 0;i < n;i++)
	{
		orderlen = strlen(order);
		readylen = strlen(ready[i]);
		itvmax = (readylen - 1) / (orderlen - 1);
		tf = 0;
		//가능한 간판글자의 간격 범위 세팅
		for(itv = 1;itv <= itvmax;itv++)
		{
			//글자검사 시작위치 설정
			for(j = 0;j < 32;j++)
			{
				charcnt = 0;
				l = 0;
				loopcnt = 0;
				//간격에 맞게 글자 검사
				if(ready[i][j] == order[l])
				{
					l++;
					loopcnt++;
					for(k = j + itv;loopcnt < orderlen;k += itv, loopcnt++)
					{
						tf = 1;
						if(ready[i][k] != order[l])
						{
							tf = 0;
							break;
						}
						l++;
					}
				}
				if(tf == 1) break;
			}
			if(tf == 1) break;
		}
		if(tf == 1) tfcnt++;
	}
	printf("%d", tfcnt);
	return 0;
}
