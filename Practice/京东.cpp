#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <string>

using namespace std;

int 京东()
{
	int n, m;
	string s;
	while (cin >> n >> m)
	{
		int min = 0;
		int max = 0;
		vector<int> prize(n,0);//◊¢“‚≥ı ºªØ
		for (int i = 0; i < n; i++)
		{
			cin >> prize[i];
		}
		sort(prize.begin(),prize.end());
		vector<string> goods;
		for (int i = 0; i < m; i++)
		{
			cin >> s;
			goods.push_back(s);
		}
		map<string, int> count;
		map<string, int>::iterator c_itr;
		for (int i = 0; i < m; i++)
		{
			count[goods[i]]++;
		}
		vector<int> count2;
		for (c_itr = count.begin(); c_itr != count.end(); c_itr++)
		{
			count2.push_back(c_itr->second);
		}
		sort(count2.begin(),count2.end());
		for (int i = 0; i < (int)count2.size(); i++)
		{
			max += prize[n - 1 - i] * count2[count2.size()-1-i];
			min += prize[i] * count2[count2.size() - 1 - i];
		}
		cout << min <<' '<< max << endl;
	}
	return 0;
}
