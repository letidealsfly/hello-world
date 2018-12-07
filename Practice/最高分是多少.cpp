#include <iostream>
#include <vector>

using namespace std;

int 最高分是多少()
{
	int N, M;
	char c;
	int x, y;
	int max;
	int tmp;
	while (cin >> N >> M)
	{
		vector<int> grades(N,0);
		vector<int> record;
		for (int i = 0; i < N; i++)
		{
			cin >> grades[i];
		}
		for (int i = 0; i < M; i++)
		{
			cin >> c >> x >> y;
			max = 0;
			if (c == 'Q')
			{
				if (x > y)
				{
					tmp = x;
					x = y;
					y = tmp;
				}
				if (x < y)
				{
					for (int i = x - 1; i < y; i++)
					{
						if (grades[i] > max)
							max = grades[i];
					}
				}
				else if (x == y)
					max = grades[x - 1];
				//cout << max << endl;
				record.push_back(max);
			}
			if (c == 'U')
			{
				grades[x - 1] = y;
			}
		}
		for (int i = 0; i < (int)record.size(); i++)
		{
			cout << record[i] << endl;
		}
	}
	return 0;
}
