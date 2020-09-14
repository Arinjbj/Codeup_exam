#include <stdio.h>

int main()
{
	int list[10] = {}, cnt = 0, temp1 = 0, temp2 = 0;
	for (int i = 0; i < 10; ++i) {
		scanf("%d", &list[i]);
	}
	for (int i = 0; i < 10; ++i) {
		if (list[i] == temp1 || list[i] == temp2) ++cnt;
		if (list[i] != temp2) {
			temp1 = temp2;
			temp2 = list[i];
		}
	}
	printf("%d", cnt);
	return 0;
}