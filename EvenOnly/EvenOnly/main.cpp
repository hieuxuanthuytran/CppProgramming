#include <iostream>
using namespace std;

int main()
{
	int count;

	cout << "Please enter a number (1-100): ";
	cin >> count;

	while (count <= 100)
	{
		if (count % 2 != 0)
		{
			count++;
			continue;			
		}
		cout << count << endl;
		count++;
	}

	return 0;
}