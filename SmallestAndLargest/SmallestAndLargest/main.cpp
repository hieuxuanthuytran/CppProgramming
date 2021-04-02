#include <iostream>

using namespace std;


int largest(int first, int second, int third);

int smallest(int first, int second, int third);


int main()

{

	int number1, number2, number3, largestnumber, smallestnumber;

	cout << "Input the first integer: ";

	cin >> number1;

	cout << "Input the second integer: ";

	cin >> number2;

	cout << "Input the third integer: ";

	cin >> number3;

	largestnumber = largest(number1, number2, number3);

	smallestnumber = smallest(number1, number2, number3);

	cout << "The largest number was " << largestnumber;

	cout << " and the smallest " << smallestnumber << "." << endl;

	return 0;
}

int largest(int first, int second, int third)
{
	int largestNum;
	if (first <= third && second <= third)
	{
		largestNum = third;
	}
	else if (first <= second && third <= second)
	{
		largestNum = second;
	}
	else
	{
		largestNum = first;
	}

	return largestNum;
}

int smallest(int first, int second, int third)
{
	int smallestNum;
	if (first >= third && second >= third)
	{
		smallestNum = third;
	}
	else if (first >= second && third >= second)
	{
		smallestNum = second;
	}
	else
	{
		smallestNum = first;
	}

	return smallestNum;
}