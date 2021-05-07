#include <iostream>
#include <string>
using namespace std;


int getResult(int num1, int num2);
string getResult(string str1, string str2);
int getResult(int n);

int main()
{
	int resultNum = getResult(30, 20);
	string nameResult = getResult("Xuan", "Thuy");
	int cube = getResult(10);

	cout << "Result num is " << resultNum << endl;
	cout << "Name result is " << nameResult << endl;
	cout << "Cube result is " << cube << endl;

	return 0;
}


int getResult(int num1, int num2)
{
	return num1 * num2;
}

string getResult(string str1, string str2)
{
	return str1 + " " + str2;
}

int getResult(int n)
{
	return n * n * n;
}
