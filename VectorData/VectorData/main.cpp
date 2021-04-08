#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector <int> myVector{};
	int num;

	cout << "Enter a positive integer to add to the vector, or negative integer to quit! " << endl;

	for (int i = 0; i <= myVector.size(); i++)
	{
		cin >> num;
		if (num < 0)
		{
			cout << "You entered a negative integer to quit the program!" << endl;
			cout << endl;
			break;
		}
		myVector.push_back(num);
	}

	for (int val : myVector) {
		cout << "Now here are double the amounts: " << val * 2 << endl;
	}

	return 0;
}