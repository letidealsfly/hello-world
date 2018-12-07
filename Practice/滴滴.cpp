#include <iostream>
#include <mm_malloc.h>
#include <vector>
#include <algorithm>
#include <string.h>
#include <map>

using namespace std;

struct HOST{
	int b;//ren shu
	int c;//jin e
};

bool cmp(HOST x, HOST y)
{
	if (x.c != y.c)
		return x.c>y.c;
	else
		return x.b<y.b;
}

int 滴滴()
{
	int n, m;
	while (cin >> n >> m)
	{
		int max = 0;
		int sum = 0;
		vector<int> a(n);
		for (int i = 0; i<n; i++)
		{
			cin >> a[i];
		}
		sort(a.begin(), a.end());

		vector<HOST> host;
		HOST h;
		for (int i = 0; i<m; i++)
		{
			cin >> h.b >> h.c;
			host.push_back(h);
		}
		sort(host.begin(), host.end(), cmp);

		for (int i = 0; i<n; i++)
		{
			for (int j = 0; j<m; j++)
			{
				if (host[j].c>max)
					if (host[j].b<a[i])
					{
						max = host[j].c;
						host[j].c = 0;
					}
			}
			sum += max;
			max = 0;
		}
		cout << sum << endl;

	}
	return 0;
}

