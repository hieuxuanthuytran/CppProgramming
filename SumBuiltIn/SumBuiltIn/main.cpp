#include <iostream>
using namespace std;

int sumArray(int myArray[], int arraySize);

int main()
{
	int myArray[]{ 2,3,4,5,6,7,8,9,10 };
	int sum = sumArray(myArray, 9);

	cout << "Sum of the elements in myArray is " << sum << endl;

	return 0;
}

int sumArray(int myArray[], int arraySize)
{
	int sum = 0;

	for (int i = 0; i < arraySize; i++)
	{
		sum += myArray[i];
	}

	return sum;
}