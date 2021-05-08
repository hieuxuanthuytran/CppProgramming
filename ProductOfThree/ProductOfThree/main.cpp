#include <iostream>
using namespace std;

int multiply(int num1, int num2, int num3);

int main()
{
	int solution = multiply(10, 20, 30);

	cout << "The result is " << solution << endl;
	return 0;
}

int multiply(int num1, int num2, int num3)
{
	return num1 * num2 * num3;
}