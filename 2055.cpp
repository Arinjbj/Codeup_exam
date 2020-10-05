#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int a, b, max, min, i, j, temp;
	int result[200] = {};

	cin >> a;
	cin >> b;

	if (a > b)
	{
		max = a;
		min = b;
	}
	else
	{
		max = b;
		min = a;
	}
	result[0] = a;
	result[1] = b;
	j = 2;
	for (i = 1; i * i < max; ++i)
	{
		if (max % i == 0)
		{
			result[j++] = i;
			result[j++] = max / i;
		}
		if (min % i == 0)
		{
			result[j++] = i;
			if (i * i == min) continue;
			temp = min / i;
			result[j++] = temp;
		}
	}
	if (i * i == max) result[j++] = i;
	sort(result, result + j);
	for (i = 0; i < j; ++i)
	{
		if (i == 0) cout << result[i] << " ";
		else if (i > 0 && (result[i] != result[i - 1])) cout << result[i] << " ";
	}
	return 0;
}