#include<iostream>

using namespace std;

int main()

{
	int number;

	for (int number = 0; number <= 50; number++) {
		if (number % 2 == 0) {
			cout << number << " is even" << endl;
		}
		else {
			cout << number << " is odd" << endl;
		}	
	}
	
	return 0;
}


