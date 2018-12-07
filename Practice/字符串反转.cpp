#include <iostream>
#include <string>

using namespace std;

int 字符串反转()
{
	string str;
	while (getline(cin,str))
	{
		int len = (int)str.size();
		for (int i = len - 1; i >= 0; i--)
			cout << str[i];
	}
	return 0;
}
