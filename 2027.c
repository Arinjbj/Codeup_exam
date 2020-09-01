#include <stdio.h>

int main()
{
	int arr[10000] = {1, 1};
	int n, locset;

	scanf("%d", &n);

	for(int i = 0; i < n; i++)
	{
		if(i == 0 || i == 1) continue;
		locset = arr[i - 1] - 1;
		arr[i] = arr[0 + locset] + arr[i - 1 - locset];
	}
	printf("%d", arr[n - 1]);
	return 0;
}
