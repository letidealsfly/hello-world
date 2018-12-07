#include <iostream>
#include <math.h>
#include <iomanip>
#include <stdio.h>

using namespace std;

int shuliehe()
{
	int n, m;
	while (cin >> n >> m)
	{
		double sum = 0.0F;
		double t = n;
		for (int i = 0; i < m; i++)
		{
			sum += t;
			t = sqrt(t);
		}
		//cout<<setiosflags(ios::fixed) << setprecision(2) <<sum<<endl;
		printf("%.2lf\n", sum);
	}
	return 0;
}

int shuixianhua()
{
	int x, y;
	int a, b, c;
	bool flag=false;
	string s;
	while (cin >> x >> y)
	{
		for (; x <= y; x++)
		{
			a = x % 10;
			b = x / 10 % 10;
			c = x / 100 % 10;
			if (x == pow(a, 3) + pow(b, 3) + pow(c, 3))
			{
				cout << x << " ";
				flag = true;
			}
		}
		if (!flag)
			cout << "no" << endl;
		else
			cout << endl;
		flag = false;
	}
	return 0;
}
