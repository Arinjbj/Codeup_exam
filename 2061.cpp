#include <iostream>
using namespace std;

int main()
{
	int t, x, m, c, w;
	int weight, neededballons, neededmoney;
	char type;
	cin >> type >> t >> x >> m >> c >> w;
	switch (type)
	{
	case'A':
		weight = 10;
		break;
	case'S':
		weight = 2;
		break;
	case'O':
		weight = 1;
		break;
	default:
		weight = -1;
		break;
	}
	weight *= x;
	neededballons = weight / w;
	if (weight % w != 0) ++neededballons;
	neededballons += t;
	neededmoney = neededballons * c;
	if (neededmoney > m)
	{
		cout << "No";
	}
	else
	{
		cout << "Yes";
	}
	return 0;
}