#include<iostream>

using namespace std;

void main()
{
	int numbers[5] = { 35, 82, 17, 96, 54 };
	int* p = numbers;
	int MaxNum = 0;

	for (int i = 0; i < 5; i++)
	{
		if (MaxNum < p[i])
		{
			MaxNum = p[i];
		}
	}
	cout << MaxNum << endl;
}