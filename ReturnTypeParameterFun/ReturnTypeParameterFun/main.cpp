#include <iostream>
using namespace std;

void printHello();
void printNumber(int a);
int giveMe10();
int addThese(int num1, int num2);
int square(int b);

int main()
{
	int num1 = 10;
	int num2 = 15;

	printHello();
	printNumber(100);

	int someData = giveMe10();
	cout << someData << endl;

	int totalValue = addThese(num1, num2);
	cout << totalValue << endl;

	printNumber(addThese(num1, 5));

	int result = square(1109);
	cout << result << endl;

	// Or cout << square(5) << endl;

	return 0;
}

void printHello()
{
	cout << "Hello there!" << endl;
}

void printNumber(int a)
{
	cout << "The number is " << a << endl;
}

int giveMe10()
{
	return 10;
}

int addThese(int num1, int num2)
{
	return num1 + num2;
}

int square(int b)
{
	return b * b;
}