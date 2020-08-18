#include <stdio.h>

int main()
{
	int a, b, clap, i;
	char str[7];
	scanf("%d %d", &a, &b);
	for(;a <= b;a++)
	{
		sprintf(str, "%d", a);
		for(i = 0, clap = 0;str[i];i++)
		{
			if(str[i] == '3' || str[i] == '6' || str[i] == '9') clap++;
		}
		if(clap == 0) printf("%s", str);
		else for(i = 0;i < clap;i++) printf("K");
		printf("\n");
	}
	return 0;
}
