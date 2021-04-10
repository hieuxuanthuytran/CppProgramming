#include <iostream>
#include <array>
using namespace std;

int main()
{
	const int MAX_DAYS = 30;
	int days;
	double hours, totalHours = 0;
	array <double, MAX_DAYS> hoursOfWorkday;
	cout << "The program calculates the total amount of work hours during a given time frame and the average work day length." << endl;
	cout << endl;
	cout << "How many days: ";
	cin >> days;

	for (int i = 0; i < days; i++)
	{
		cout << "Input hours of workday " << i + 1 << ": ";
		cin >> hours;
		hoursOfWorkday[i] = hours;
		totalHours += hours;
	}

	cout << "Total work hours: " << totalHours << endl;
	cout << "Average work day length: " << totalHours / days << endl;

	cout << "Inputted hours: ";
	for (int j = 0; j < days; j++)
	{
		cout << hoursOfWorkday[j] << " ";
	}

	return 0;
}