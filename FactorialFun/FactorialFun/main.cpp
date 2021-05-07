#include <iostream>
#include <cmath>
using namespace std;

int factorial(int num);

int main()
{
	int result = factorial(6);

	cout << "The result of factorial(6) is " << result << endl;
	return 0;
}

int factorial(int num)
{
	if (num > 1)
	{
		return num * factorial(num - 1);
	}
	return 1;
}