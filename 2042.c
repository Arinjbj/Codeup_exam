#include <stdio.h>

int main()
{
	int lab[19][19] = {};
	int power3x[8] = { -1, -1, -1, 0, 0, 1, 1, 1 };
	int power3y[8] = { -1, 0, 1, -1, 1, -1, 0, 1 };
	int power5x[16] = { -2, -2, -2, -2, -2, -1, -1, 0, 0, 1, 1, 2, 2, 2, 2, 2 };
	int power5y[16] = { -2, -1, 0, 1, 2, -2, 2, -2, 2, -2, 2, -2, -1, 0, 1, 2 };
	int n, power, firemax = 0, firecnt = 0, maxx, maxy;
	scanf("%d", &n);
	scanf("%d", &power);
	for (int i = 2; i < n + 2; i++) {
		for (int j = 2; j < n + 2; j++) {
			scanf("%d", &lab[i][j]);
		}
	}
	for (int i = 2; i < n + 2; i++) {
		for (int j = 2; j < n + 2; j++) {
			if (lab[i][j] == 1) continue;
			firecnt = 0;
			for (int k = 0; k < 8; k++) {
				if (lab[i + power3x[k]][j + power3y[k]] == 1) firecnt++;
			}
			if (firecnt == 8) continue;
			if (power == 5) {
				for (int k = 0; k < 16; k++) {
					if (lab[i + power5x[k]][j + power5y[k]] == 1) firecnt++;
				}
			}
			if (firecnt > firemax) {
				firemax = firecnt;
				maxx = i;
				maxy = j;
			}
		}
	}
	if (firemax == 0) {
		printf("119");
	} else {
		printf("%d %d", --maxx, --maxy);
	}
	return 0;
}