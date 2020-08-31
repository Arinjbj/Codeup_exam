#include <stdio.h>
#include <stdbool.h>

int main()
{
	char year[5];
	char date[5];
	int iyear, idate[2];
	int num['9'] = {};
	bool tf = true;

	scanf("%d/%d/%d", &iyear, &idate[0], &idate[1]);

	sprintf(year, "%d", iyear);

	idate[0] += idate[1] * 100;
	sprintf(date, "%04d", idate[0]);

	for(int i = 0; i < 4; i++) 
	{
		num[year[i]]++;
		num[date[i]]--;
	}
	for(int i = 0; i < '9'; i++)
	{
		if(num[i] == 0) continue;
		else
		{
			tf = false;
			break;
		}
	}
	printf(tf ? "yes" : "no");
	return 0;
}
