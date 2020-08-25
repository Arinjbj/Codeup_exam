#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n, i, r, pHFre[1001] = {0};
	int pHFreMax1 = 0;				//������� �굵�� �󵵼� ���� 
	int pHFreMax2 = 0;				//�ι�°�� ���� �굵�� �󵵼� ���� 
	int pHofMax1 = 0, pHofMax2 = 0;	//���� �󵵼��϶��� �굵 ����
	
	scanf("%d", &n);
	for(i = 0; i < n; i++)
	{
		scanf("%d", &r);
		pHFre[r]++;
	}
	for(i = 0; i < 1001; i++)
	{
		if(pHFre[i] == 0) continue;
		if(pHFre[i] > pHFreMax1)
		{
			pHFreMax1 = pHFre[i];
			pHofMax1 = i;
			pHofMax2 = 0;
		}
		else if(pHFre[i] == pHFreMax1)
		{
			pHofMax2 = i;
		}
	}
	if(pHofMax2 != 0)
	{
		printf("%d", pHofMax2 - pHofMax1);
		return 0;
	}
	for(i = 0; i < 1001; i++)
	{
		if(pHFre[i] == 0) continue;
		if(pHFre[i] < pHFreMax1 && pHFre[i] > pHFreMax2)
		{
			pHFreMax2 = pHFre[i];
			pHofMax2 = i;
		}
		else if(pHFre[i] < pHFreMax1 && pHFre[i] == pHFreMax2)
		{
			if(abs(pHofMax1 - pHofMax2) < abs(pHofMax1 - i))
				pHofMax2 = i;
		}
	}
	printf("%d", abs(pHofMax1 - pHofMax2));
	return 0;
}
