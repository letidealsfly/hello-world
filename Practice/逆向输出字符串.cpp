#include<iostream>
#include<map>
#include<string>

using namespace std;

int 逆向输出字符串()
{
	string str = "google";
	map<char, int> m;
	map<char, int>::iterator m_itr;
	int result = (int)str.size();
	for (int i = 0; i<str.size(); i++)
	{
		m.insert(pair<char, int>(str[i], 1));
	}
	for (m_itr = m.begin(); m_itr != m.end(); m_itr++)
	{
		cout << m_itr->first << " " << m_itr->second << endl;
		if (m_itr->second == 1)
			result = str.find(m_itr->first) - 1>result ? result : (int)str.find(m_itr->first) - 1;
	}
	cout << result << endl;
	return 0;
}
