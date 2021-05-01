#include<iostream>
using namespace std;

void someFunction(int aParam);
double myGlobalDouble = 3.14159;
void modifyGlobal();
int counter = 0;

int main()
{

	int localToMain = 20;
	cout << "The local to main variable is " << localToMain << endl;
	cout << "global double (in main) is " << myGlobalDouble << endl;

	someFunction(25);
	someFunction(28);
	someFunction(32);

	cout << "The value of counter before the for loop: " << counter << endl;

	for (int i = 0; i < 100; i++)
	{
		modifyGlobal();
	}
	cout << "The value of counter after the for loop: " << counter << endl;
	return 0;
}

void someFunction(int aParam)
{
	int myLocalNum = 100;
	static int myStatic = 500;
	myStatic++;
	myLocalNum++;
	myGlobalDouble++;

	cout << "My local number is " << myLocalNum << endl;
	cout << "The parameter is " << aParam << endl;
	cout << "My global double (in someFunction) is " << myGlobalDouble << endl;
	cout << "My static variable: " << myStatic << endl;
}

void modifyGlobal()
{
	counter++;
}