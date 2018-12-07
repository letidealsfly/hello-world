#include<iostream>
#include<vector>

using namespace std;

int 矩阵转置并相乘()
{
	int ini, rows, cols;
	ini = 3; rows = 4; cols = 3;

	vector<vector<int> > arr1(rows);
	for (int i = 0; i <rows; i++)
		arr1[i].resize(cols);
	vector<vector<int> > arr2(cols);
	for (int i = 0; i <cols; i++)
		arr2[i].resize(rows);
	vector<vector<int> > arr3(rows);
	for (int i = 0; i <rows; i++)
		arr3[i].resize(rows);

	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			arr1[i][j] = ini;
			arr2[j][i] = ini;
			ini++;
		}
	}
	for (int i = 0; i < rows; i++)
		for (int j = 0; j < rows; j++)
			for (int k = 0; k < cols; k++)
				arr3[i][j] += arr1[i][k] * arr2[k][j];

	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < rows; j++)
		{
			cout << arr3[i][j] << " ";
			if (j == rows - 1)
				cout << endl;
		}
	}
	return 0;
}
