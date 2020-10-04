#include <iostream>
using namespace std;
int main()
{
	int perfect[5] = { 6, 28, 496, 8128, 33550336 };
	int n[5], tf;
	for (int i = 0; i < 5; ++i) cin >> n[i];
	for (int i = 0; i < 5; ++i)
	{
		tf = 0;
		for (int j = 0; j < 5; ++j)
		{
			if (n[i] == perfect[j])
			{
				tf = 1;
				break;
			}
		}
		cout << (tf ? "yes" : "no") << endl;
	}
	return 0;
}