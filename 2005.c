#include <stdio.h>
#include <stdlib.h>

int main()
{
	int *A, n, m, i, j, tf = 1;
	scanf("%d", &n);
	
	A = (int *)calloc(n, sizeof(int));
	for(i = 0;i < n;i++)
	{
		scanf("%d ", &A[i]);
	}
	scanf("%d", &m);
	
	for(i = 0;i < n - 1;i++)
	{
		for(j = i + 1;j < n;j++)
		{
			if(abs(A[i] - A[j]) % m == 0)
			{
				tf = 0;
				break;
			}
		}
		if(tf == 0) break;
	}
	free(A);
	if(tf == 0) printf("no");
	else printf("yes");
	return 0;
}