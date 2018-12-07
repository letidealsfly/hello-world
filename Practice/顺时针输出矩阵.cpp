#include<iostream>
#include<vector>

using namespace std;

int 顺时针输出矩阵()
{
	vector<vector<int> > matrix(3);
	for (int i = 0; i <3; i++)
		matrix[i].resize(3, i);
	int rows = (int)matrix.size();
	int cols = (int)matrix[0].size();
	int circle = (rows<cols ? cols : rows) / 2;
	for (int i = 0; i<circle; i++)
	{
		for (int j = i; j < cols - i; j++)
			cout << matrix[i][j];
		for (int j = i + 1; j<rows - i; j++)
			cout << matrix[j][cols - i - 1];
		for (int j = cols - i - 2; j >= i; j--)
			cout << matrix[rows - i - 1][j];
		for (int j = rows - i - 2; j>i; j--)
			cout << matrix[j][i];
	}
	if ((rows == cols) && (rows % 2 == 1))
		cout << matrix[rows / 2][cols / 2];
	return 0;
}
