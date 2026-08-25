#include<iostream>

using namespace std;

void function(int P , int num)
{
	P = P * num;
	cout << P << endl;
}

void main()
{
	int numbers[5] = { 10, 20, 30, 40, 50 };
	int* p = numbers;
	int NUM = 0;

	cin >> NUM;

	for (int i = 0; i < 5; i++)
	{
		function(p[i],NUM);
	}
}