/*
	The Complete C++ Developer Course
	Lecture: 1,2,3
	Instruction: Dr. John P. Baugh
*/


#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main() 
{
		
	int myInt;
	myInt = 15;
	double myDouble = 3.14159;
	double stateTaxRate = 0.06;		//This is the Michigan State sales tax!

	cout << stateTaxRate << endl;
	cout << myDouble << endl;
	cout << myInt << endl;

	char singleChar = 'a';
	string myName = "HieuTran";

	cout << "Hello " << myName << endl;
	cout << singleChar << endl;

	bool isRaining = true;
	bool isSunny = true;
	bool isWarm = false;

	cout << boolalpha << isSunny << endl;
	cout << boolalpha << isWarm << endl;
	cout << boolalpha << isRaining << endl;

	/*
	Arithmetic operations
	%	modulus operator
*/

	int a = 10;
	int b = 3;
	int sum = a + b;
	int difference = a - b;
	int product = a * b;
	int quotient = a / b;
	int remainder = a % b;
	int result = 10;
	result += 10; //result = result + 10;


	cout << "Sum = " << sum << endl;
	cout << "Difference = " << difference << endl;
	cout << "Product = " << product << endl;
	cout << "Quotient = " << quotient << endl;
	cout << "Remainder = " << remainder << endl;
	cout << "Result = " << result << endl;

	int myNum = 10;
	myNum += 5;
	myNum *= 2;
	myNum *= 2;
	myNum *= 2;

	cout << myNum << endl;

	/*
		>	greater than
		>=	greater than or equal to
		<	less than
		<=	less than or equal to
		==	equal-to (equality)
		!=	not-equal-to (equality)
	*/

	//cout << boolalpha;
	int c = 15;
	int d = 20;
	bool areEqual = c == d;

	cout << (c < d) << endl;
	cout << areEqual << endl;

	int age = 26;
	bool compareAge = age >= 21;

	cout <<"Age >= 21? " << compareAge << endl;

	/*
		Logiccal Operators
	*/

	bool issRaining = true;
	bool issWarm = false;

	cout << boolalpha;
	cout << (issRaining && issWarm) << endl;
	cout << (issRaining || issWarm) << endl;
	cout << (!issWarm) << endl;

	/*
		Symbolic Constants
	*/

	const double MY_PI = 3.14159;
	const string MY_NAME = "Hieu Tran";
	cout << MY_NAME << endl;

	/*
		Keyboardinput
	*/
	
	/*string fullName;
	string location;
	int initialScore;

	cout << "Please enter a integer from 0-100" << endl;
	cin >> initialScore;

	cin.get();

	cout << "Please enter your full name" << endl;
	getline(cin, fullName);

	cout << "Please enter your location" << endl;
	getline(cin, location);

	cout << "Hello, " << fullName << endl;
	cout << "We heard you were from " << location << endl;
	cout << "your initial score is " << initialScore << endl;
	cout << "But with 5 points added, your score is now " << initialScore + 5 << endl;*/

	/*
		Average number
	*/

	double num1, num2, num3, average;
	
	cout << "Please input the first number!" << endl;
	cin >> num1;

	cout << "Please input the second number!" << endl;
	cin >> num2;

	cout << "Please input the third number!" << endl;
	cin >> num3;

	average = (num1 + num2 + num3) / 3;

	cout << "The average of three numbes is: " << average << endl;

	return 0;
}
