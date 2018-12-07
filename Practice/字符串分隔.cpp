#include<iostream>
#include<string.h>

using namespace std;

int 字符串分隔()
{
	char c1[100];
	char c2[100];
	int len1, len2;
	int c, d;
	while (cin >> c1)
	{
		cin >> c2;
		c = 0;
		d = 0;
		len1 = (int)strlen(c1);
		len2 = (int)strlen(c2);
		for (int i = 0; i<len1; i++)
		{
			cout << c1[i];
			c++;
			if (c == 8)
			{
				c = 0;
				cout << endl;
			}
		}
		if (c != 8)
		{
			int j = 7 - c;
			for (int n = 0; n <= j; n++)
			{
				cout << "0";
			}
			cout << endl;
		}
		for (int l = 0; l<len2; l++)
		{
			cout << c2[l];
			d++;
			if (d == 8)
			{
				d = 0;
				cout << endl;
			}
		}
		if (d != 8)
		{
			int k = 7 - d;
			for (int m = 0; m <= k; m++)
			{
				cout << "0";
			}
			cout << endl;
		}
	}
	return 0;
}
