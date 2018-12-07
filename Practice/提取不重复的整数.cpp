#include <iostream>
#include <vector>

using namespace std;

int 提取不重复的整数()
{
	int n, m;
	while (cin >> n)
	{
		vector<int> count(10,0);
		while (n)
		{
			m = n % 10;
			if (count[m] == 0)
			{
				count[m]++;
				cout << m;
			}
			else if (count[m] > 0)
				n /= 10;
		}
	}
	return 0;
}
