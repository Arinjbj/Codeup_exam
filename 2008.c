#include <stdio.h>
#include <stdlib.h>

int main()
{
	int *A, n, i, up, down;
	scanf("%d", &n);
	
	A = (int *)calloc(n, sizeof(int));
	
	for(i = 0;i < n;i++) scanf("%d", &A[i]);
	up = down = 0;
	for(i = 0;i < n - 1;i++)
	{
		if(A[i] > A[i + 1]) down++;
		else if(A[i] < A[i + 1]) up++;
		
		if((down != 0) && (up != 0)) break;
	}
	if(((down != 0) && (up != 0)) || ((down == 0) && (up == 0))) printf("섞임");
	else if(down != 0) printf("내림차순");
	else printf("오름차순");
	free(A);
	return 0;
}