#include <iostream>
using namespace std;

int main()
{
	int number, i;
	float grade = 0, sum = 0, average;
	cout << "Program calculates the test grade average.\n";
	cout << "Finish inputting with a negative number.\n";
	do {
		cout << "Input grade (4-10): ";
		cin >> number;
		if (4 <= number && number <= 10) {
			grade++;
			sum = sum + number;
		}
	} while (number >= 0);
	cout << "You inputted " << grade << " grades." << endl;
	average = sum / grade;
	cout << "Grade average: " << average << endl;
}