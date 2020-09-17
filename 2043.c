#include <stdio.h>
#include <string.h>

char pass[8] = { "aehiouwy" };
char num[7][8] = { "", "bfpv", "cgjkqsxz", "dt", "l", "mn", "r" };

int main()
{
	char str[51], result[51] = {};
	int len, resultloc = 0;
	scanf("%s", str);
	len = strlen(str);
	for (int i = 0; i < len; ++i) {
		if (i == 0) {
			result[resultloc] = str[i];
			++resultloc;
			continue;
		}
		if (str[i] == str[i - 1] || str[i] == str[i - 1] + 32) continue;
		for (int j = 0; j < 8; ++j) {
			if (str[i] == pass[j]) {
				goto letcontinue;
			}
		}
		for (int j = 1; j < 7; ++j) {
			for (int k = 0; k < 8; ++k) {
				if (str[i] == num[j][k]) {
					result[resultloc] = j + '0';
					++resultloc;
					goto letcontinue;
				}
			}
		}
	letcontinue:
		continue;
	}
	for (int i = 0; i < 4; ++i) {
		if (result[i] == 0) result[i] = '0';
		printf("%c", result[i]);
	}
	return 0;
}