#include <iostream>
#include <string>
#include <stack>

using namespace std;

int 句子逆序()
{
	stack<string> str;
	string s;
	while (cin >> s)
	{
		str.push(s);
	}
	while (!str.empty())
	{
		cout << str.top();
		str.pop();
		if (!str.empty())
			cout << ' ';
	}
	return 0;
}
