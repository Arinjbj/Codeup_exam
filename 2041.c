#include <stdio.h>
#include <string.h>

char months[13][16] = {"",        "January",  "February", "March",  "April",
                       "May",     "June",     "July",     "August", "September",
                       "October", "November", "December"};

int main() {
  char name[101][51], monthstr[16];
  int birthm[100] = {}, birthd[100] = {};
  int n, year = 0;
  scanf("%d", &n);
  for (int i = 0; i < n; ++i) {
    scanf("%s %s %d%*s", name[i], monthstr, &birthd[i]);
    for (int j = 1; j <= 12; ++j) {
      if (strcmp(months[j], monthstr) == 0) {
        birthm[i] = j;
        break;
      }
    }
  }
  for (int i = 1; i < n; ++i) {
    if (birthm[i - 1] > birthm[i]) {
      ++year;
    } else if (birthm[i - 1] == birthm[i]) {
      if (birthd[i - 1] > birthd[i]) ++year;
    }
  }
  if (year == 0) {
    printf("No difference.");
  } else if (year == 1) {
    printf("%s is %d year older than %s.", name[0], year, name[n - 1]);
  } else {
    printf("%s is %d years older than %s.", name[0], year, name[n - 1]);
  }
  return 0;
}