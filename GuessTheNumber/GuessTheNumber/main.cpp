#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	int guess, randomNum, count = 1;
	bool guessedNum = false;
	srand(time(nullptr));

	randomNum = rand() % 100 + 1;
	
	while (!guessedNum) {
		cout << "Let's guess the computer's number!" << endl;
		cin >> guess;

		if (guess == randomNum) {
			cout << "Congratulations! You guessed the number in " << guess << "!\nThanks for playing." << endl;
			guessedNum = true;
		}
		else if (guess < randomNum && guess >= 1) {
			cout << "Your guess is too low!\n";
			count++;
			continue;
		}
		else if (guess > randomNum && guess <= 100) {
			cout << "Your guess is too high!\n";
			count++;
			continue;
		}
		else {
			cout << "It was a wasted guess! Please pick an integer between 1 and 100.\n";
			count++;
			continue;
		}
	}
	cout << "The total number of guesses: " << count << endl;
	
	return 0;
}