#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int 字串的连接最长路径查找()
{
	int n;
	string s;
	vector<string> str;
	vector<string>::iterator s_itr;
	while (cin >> n)
	{
		for (int i = 0; i < n; i++)
		{
			cin >> s;
			str.push_back(s);
			sort(str.begin(), str.end());
		}
		for (s_itr = str.begin(); s_itr != str.end(); s_itr++)
		{
			cout << *s_itr << endl;
		}
	}
	return 0;
}
