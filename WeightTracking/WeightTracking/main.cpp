#include <iostream>
#include <array>
#include <vector>
#include <string>
using namespace std;

int main()
{
	const int NUM_PEOPLE = 5;
	vector <string> names;
	vector <double> weights;
	string name;
	double weight;
	for (int i = 0; i < NUM_PEOPLE; i++)
	{
		cout << "Please enter a person's full name: ";
		getline(cin, name);
		names.push_back(name);

		cout << "Please enter " << name << "'s weight: ";
		cin >> weight;
		cin.get(); //consume newline character
		weights.push_back(weight);
	}

	cout << endl << endl;

	for (int j = 0; j < NUM_PEOPLE; j++)
	{
		cout<<names[j]<<" weights "<<weights[j]<< " kg "<<endl;
	}

	return 0;
}