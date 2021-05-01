#include <iostream>
using namespace std;

void valueChanged1(int someNum);
void valueChanged2(int& someNum);
void threeTimesN(int input, int& output);

int main()
{
	int myNumber = 20;

	cout << "Before valueChanged1 call, myNumber is " << myNumber << endl;
	valueChanged1(myNumber);
	cout << "After valueChanged1 call, myNumber is " << myNumber << endl;

	cout << endl << endl;

	cout << "myNumber is currently: " << myNumber << endl;
	valueChanged2(myNumber);
	cout << "After valueChanged2 call, myNumber is " << myNumber << endl;

	cout << endl << endl;

	int integer1, integer2;
	cout << "integer is currently: " << endl;
	cin >> integer1;
	threeTimesN(integer1, integer2);
	cout << "After threeTimesN, integer is " << integer2 << endl;

	return 0;
}

void valueChanged1(int someNum)
{
	someNum = 100;
	cout << "Some num in valueChanged1 is " << someNum << endl;
}

void valueChanged2(int& someNum)
{
	someNum = 100;
	cout << "Inside valueChanged2 function, someNum is " << someNum << endl;
}

void threeTimesN(int input, int& output)
{
	output = input * 3;
}