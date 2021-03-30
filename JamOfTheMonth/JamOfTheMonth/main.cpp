#include <iostream>
using namespace std;

int main()
{
	char package;
	int pricePerMonth = 0, priceEachJam = 0;
	int jamsPurchased = 0, jamsIncluded = 0;

	cout << "What package do you own? A, B or C" << endl;
	cin >> package;
	switch (package)
	{
		case 'A':
		case 'a':
		{
			cout << "How many jams, jellies, or preserves did you purchase this month? " << endl;
			cin >> jamsPurchased;
			pricePerMonth = 8;
			priceEachJam = 5;
			jamsIncluded = 2;
			if (jamsPurchased <= jamsIncluded) {
				cout << "You owe $" << pricePerMonth << endl;				
			}
			else {
				pricePerMonth += ((jamsPurchased - jamsIncluded) * priceEachJam);
				cout << "You owe $" << pricePerMonth << endl;
			}
			break;
		}
		case 'B':
		case 'b':
		{
			cout << "How many jams, jellies, or preserves did you purchase this month? " << endl;
			cin >> jamsPurchased;
			pricePerMonth = 12;
			priceEachJam = 4;
			jamsIncluded = 4;
			if (jamsPurchased <= jamsIncluded) {
				cout << "You owe $" << pricePerMonth << endl;
			}
			else {
				pricePerMonth += ((jamsPurchased - jamsIncluded) * priceEachJam);
				cout << "You owe $" << pricePerMonth << endl;
			}
			break;
		}
		case 'C':
		case 'c':
		{
			cout << "How many jams, jellies, or preserves did you purchase this month? " << endl;
			cin >> jamsPurchased;
			pricePerMonth = 15;
			priceEachJam = 3;
			jamsIncluded = 6;
			if (jamsPurchased <= jamsIncluded) {
				cout << "You owe $" << pricePerMonth << endl;
			}
			else {
				pricePerMonth += ((jamsPurchased - jamsIncluded) * priceEachJam);
				cout << "You owe $" << pricePerMonth << endl;
			}
			break;
		}
		default:
			cout << "You entered a invalid option." << endl;
	}

	return 0;
}