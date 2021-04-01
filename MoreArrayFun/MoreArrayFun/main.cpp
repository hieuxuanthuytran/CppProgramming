#include <iostream>
using namespace std;

int main()
{
	const int ARRAY_SIZE = 10;

	int numberArray[ARRAY_SIZE];
	for (int i = 0; i < ARRAY_SIZE; i++) {
		numberArray[i] = i + 1;
		cout << numberArray[i] << endl;
	}

	for (int number : numberArray) {
		cout << number << endl;
	}
	return 0;
}