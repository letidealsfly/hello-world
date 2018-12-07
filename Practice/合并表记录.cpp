#include<iostream>
#include<vector>

using namespace std;

int 合并表记录()
{
	int n;
	int index;
	int value;
	while (cin >> n)
	{
		vector<int> v(n, 0);
		for (int i = 0; i<n; i++)
		{
			cin >> index >> value;
			if (v[index] == 0)
				v[index] = value;
			else
				v[index] = v[index] + value;
		}
		for (int j = 0; j<n; j++)
		{
			if (v[j]>0)
				cout << j << ' ' << v[j] << endl;
		}
	}
	return 0;
}
