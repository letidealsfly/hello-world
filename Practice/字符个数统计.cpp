#include <iostream>

using namespace std;

int 字符个数统计(){
	int a[128] = { 0 }, sum = 0;
	char c;
	while (cin >> c)
		a[c] = 1;
	for (int i = 0; i < 128; i++)
		if (a[i])
			sum++;
	cout << sum;
	return 0;
}
