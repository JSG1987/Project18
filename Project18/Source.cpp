#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	char answer;
	do
	{
	  int num, guess, tries = 0;
	  srand(time(0)); //seed random number generator
	  num = rand() % 100 + 1; // random number between 1 and 100
	  cout << "Guess My Number Game\n\n";
	  //char answer;
	

	
		do
		{
			cout << "Enter a guess between 1 and 100 : ";
			cin >> guess;
			tries++;

			if (guess > num)
				cout << "Too high!\n\n";
			else if (guess < num)
				cout << "Too low!\n\n";
			else
				cout << "\nCorrect! You got it in " << tries << " guesses!\n";

		} while (guess != num);
		cout << "Do you want to play again? (y/n)\n";
		cin >> answer;
	} while (answer == 'y');
		
	


	cout << "Thank you for playing.\n";
	system("PAUSE");
	return 0;
}

