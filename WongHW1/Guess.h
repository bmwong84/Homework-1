//Bryant Wong
//CSCI 2421 Homework 1

#ifndef GUESS_
#define GUESS_
#include <iostream>
#include <vector>
#include <cstdlib>
#include <time.h>
using namespace std;


//declare class Guess

class Guess
{
	private:
		vector<int> randomNumbers;
		vector<int> foundNumbers;
	public:
		void StartGuess();
		Guess();
};
#endif
