#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i, *A, n, state = 0;
	scanf("%d\n", &n);
	A = (int *)calloc(n, sizeof(int));
	for(i = 0;i < n;i++)
	{
		scanf("%d", &A[i]);
	}
	if(A[0] < A[1])
	{
		state = 1;
		for(i = 1;i < n - 1;i++)
		{
			if(A[i] > A[i + 1])
			{
				state = 0;
				break;
			}
		}
	}
	else if(A[0] > A[1])
	{
		state = 2;
		for(i = 1;i < n - 1;i++)
		{
			if(A[i] < A[i + 1])
			{
				state = 0;
				break;
			}
		}
	}
	else state = 0;
	free(A);
	
	switch(state)
	{
		case 0:
		printf("섞임");
		break;
		
		case 1:
		printf("오름차순");
		break;
		
		default:
		printf("내림차순");
		break;
	}
	return 0;
}