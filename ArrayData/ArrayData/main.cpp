#include <iostream>
#include <array>
using namespace std;

int main()
{
	const int ARRAY_SIZE = 5;
	array <int, ARRAY_SIZE> arrayData;

	for (int i = 0; i < 5; i++)
	{
		cout << "Enter an integer" << endl;
		cin >> arrayData[i];
	}
	
	cout << "Now here are double the amounts:" << endl;

	for (int val : arrayData)
	{
		cout << val * 2 << endl;
	}
	return 0;
}