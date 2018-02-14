#include "Guess.h"
Guess::Guess()
{}

void Guess::StartGuess()
{
	//sets timer for random number
	srand(time(NULL));
	int m;
	int n;
	//asks user for input
	std::cout << "Enter the range of numbers you wish to guess between 1 and m" << endl;
	std::cin >> m;
	std::cout << "Enter the number of numbers you wish to guess in the range of 1 to " << m << endl;
	std::cin >> n;
	//generates a vector with a set of n random numbers between 1 and m
	for (int count = 0; count < n; count++)
	{
		int random = rand() % m + 1;
		randomNumbers.push_back(random);
	}
	//initializes vector foundNumbers with number of elements m to values 0
	vector<int> foundNumbers(m, 0);
	//guessCount gives 3 tries, if the number of guessed numbers is less than the total number of numbers required, this for loop will run
	int guessCount = 0;
	for (guessCount = 0; guessCount < 3; guessCount++)
	{
		int totalcorrect = 0;
		//asks for the player's guesses one a time
		for (int playerGuess = 0; playerGuess < n; playerGuess++)
		{
			std::cout << "Enter guess " << playerGuess + 1 << " for the " << n << " integers between 1 and " << m << endl;
			int tempguess;
			std::cin >> tempguess;
			//checks if the guess the player entered exists in the random number set
			for (int scan = 0; scan < n; scan++)
			{
				if (tempguess == randomNumbers[scan])
					foundNumbers[tempguess] = foundNumbers[tempguess] + 1;
				break;
			}
		}
		//checks for the number of found numbers in the random set and sums them
		for (int checksum = 0; checksum < m; checksum++)
		{
			if (foundNumbers[checksum] != 0)
				totalcorrect = totalcorrect + foundNumbers[checksum];
		}
		//if the number of correct numbers is not the total number of numbers to be guessed, restart the loop
		if (totalcorrect != n)
		{
			std::cout << totalcorrect << " of your guesses are correct.  " << 2 - guessCount << " tries remaining.  Guess again." << endl;
			continue;
		}
		else if (totalcorrect = n)
		{
			std::cout << "You are correct!  Play again (Y/N)?" << endl;
			char playAgain;
			std::cin >> playAgain;
			if (playAgain == 'Y')
			{
				Guess gue;
				gue.StartGuess();
			}
		}
	}
	if (guessCount = 3)
	{
		std::cout << "Out of tries.  Game Over.  Play again (Y/N)?" << endl;
		char playAgain;
		std::cin >> playAgain;
		//restart the game via recursion
		if (playAgain == 'Y')
		{
			Guess gue;
			gue.StartGuess();
		}
	}
}
