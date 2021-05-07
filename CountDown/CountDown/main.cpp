#include <iostream>
using namespace std;

void countDownFrom(int num);
int sumValue(int num);

int main()
{
	countDownFrom(10);

	int totalSum = sumValue(10);

	cout << "The sum is " << totalSum << endl;

	return 0;
}

void countDownFrom(int num)
{
	if (num >= 0)
	{
		cout << num << endl;
		countDownFrom(num - 1);
	}
}

int sumValue(int num)
{
	if (num >= 1)
	{
		return num + sumValue(num - 1);
	}
	return num;
}