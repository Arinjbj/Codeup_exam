#include <stdio.h>

int main()
{
	int starth, startm, classtime, resttime, classes, lunchloc, lunchtime, temph, tempm;
	scanf("%d %d %d %d %d %d %d", &starth, &startm, &classtime, &resttime, &classes, &lunchloc, &lunchtime);
	if (lunchloc > classes) lunchloc = classes;
	temph = starth;
	tempm = startm;
	for (int i = 1; i <= classes; i++) {
		//수업시간
		tempm += classtime;
		while (tempm >= 60) {
			tempm -= 60;
			++temph;
		}
		printf("%d:%02d-%d:%02d %d교시\n", starth, startm, temph, tempm, i);
		starth = temph;
		startm = tempm;
		//점심시간(쉬는시간 패스)
		if (i == lunchloc) {
			tempm += lunchtime;
			while (tempm >= 60) {
				tempm -= 60;
				++temph;
			}
			printf("%d:%02d-%d:%02d 점심시간\n", starth, startm, temph, tempm);
			starth = temph;
			startm = tempm;
			continue;
		}
		//쉬는시간(출력x)
		tempm += resttime;
		while (tempm >= 60) {
			tempm -= 60;
			++temph;
		}
		starth = temph;
		startm = tempm;
	}
	return 0;
}