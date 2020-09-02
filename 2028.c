#include <stdio.h>

int main()
{
	int n, tri = 0, sum, cnt, i;
	scanf("%d", &n);

	while(1)
	{
		tri++;
		sum = 0;
		for(int i = 1; i <= tri; i++) sum += i;
		cnt = 2;
		for(int i = 2; i * i < sum; i++) if(sum % i == 0) cnt += 2;	
		if(i * i == sum) cnt++;
		if(cnt >= n) break;
	}
	printf("%d", sum);
	return 0;
}
