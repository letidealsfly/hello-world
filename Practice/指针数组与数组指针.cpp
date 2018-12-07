#include <iostream>

using namespace std;

int 指针数组与数组指针()
{
	int c[4] = { 1, 2, 3, 4 };
	int *a[4]; //÷∏’Î ˝◊È
	int(*b)[4]; // ˝◊È÷∏’Î
	b = &c;
	//Ω´ ˝◊Èc÷–‘™Àÿ∏≥∏¯ ˝◊Èa
	for (int i = 0; i<4; i++)
	{
		a[i] = &c[i];
	}
	// ‰≥ˆø¥œ¬Ω·π˚
	cout << *a[1] << endl; // ‰≥ˆ2æÕ∂‘
	cout << (*b)[2] << endl; // ‰≥ˆ3æÕ∂‘
	return 0;
}
