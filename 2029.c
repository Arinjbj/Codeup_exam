#include <stdio.h>

int main()
{
	int arr[1000000] = {1, 1};
	int result[1000000] = {1, 1};
	int m, n, aloc, rloc;

	scanf("%d %d", &m, &n);
	n--;

	for(int i = 1; i < m; i++)
	{
		for(int j = 0; result[j] != 0; j++) arr[j] = result[j];
		aloc = rloc = 0;
		result[rloc] = arr[aloc];
		aloc = rloc = 1;
		while(arr[aloc] != 0)
		{
			result[rloc] = arr[aloc - 1] + arr[aloc];
			rloc++;
			result[rloc] = arr[aloc];
			aloc++;
			rloc++;
		}
	}

	printf("%d", result[n]);
	return 0;
}
