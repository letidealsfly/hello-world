#include<iostream>

using namespace std;

int 连续子数组的最大和()
{
	int N, max, tmp;
	while (cin >> N)
	{
		int *arr = new int[N];
		memset(arr, 0, sizeof(int));
		max = 0;
		tmp = 0;
		for (int i = 0; i < N; i++)
		{
			cin >> arr[i];
			if (tmp<0)
				tmp = arr[i];
			else
				tmp += arr[i];
			if (max<tmp)
				max = tmp;
		}
		cout << max << endl;
		delete[] arr;
	}
	return 0;
}
