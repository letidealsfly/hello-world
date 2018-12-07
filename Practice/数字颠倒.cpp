#include <iostream>
#include <string>

using namespace std;

int 数字颠倒()
{
	int n, m;
	string str;
	while (cin >> n)
	{
		while (n)
		{
			m = n % 10;
			n /= 10;
			str += m + '0';
		}
		cout << str << endl;
		//for (int i = 0; i < (int)str.size(); i++)
		//	cout << str[i]<<' ';
	}
	return 0;
}
