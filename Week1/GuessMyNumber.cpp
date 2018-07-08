#include<iostream>
#include<cstdio>
#include<conio.h>
#include<ctime>

enum guess
{
	LOWER,
	HIGHER,
	PLUSMINUS2,
	CORRECT,
	COUNT
};

guess NumberCheck(unsigned int number, unsigned int randomNumber);
bool isNumberWithinRange(unsigned int number, unsigned int Range1, unsigned int Range2);

int main()
{
	srand(time(0));

	unsigned int attempts = 0;
	unsigned int number = 0;
	unsigned int randomNumber = rand() % 50 + 1;

	std::cout << "Random Number : " << randomNumber << "\n";

	do
	{
		std::cout << "Enter the number between 0 to 50 : ";
		std::cin >> number;

		guess iGuess = NumberCheck(number, randomNumber);

		if (iGuess == CORRECT)
		{
			std::cout << "\n" << "WIN" << "\n";
			break;
		}
		else
		{
			switch (iGuess)
			{
			case LOWER:
			{
				std::cout << "The number is lower." << "\n";
				break;
			}
			case HIGHER:
			{
				std::cout << "The number is Higher." << "\n";
				break;
			}
			case PLUSMINUS2:
			{
				std::cout << "The number is near to the random number." << "\n";
				break;
			}
			default:
				break;
			}
		}

		attempts++;
	} while (attempts < 3);

	if (attempts == 3)
	{
		std::cout << "\n" << "LOSS" << "\n";
	}

	_getch();

	return 0;
}

guess NumberCheck(unsigned int number, unsigned int randomNumber)
{
	unsigned int minNumber = 0;
	unsigned int maxNumber = 50;

	if (number != randomNumber)
	{
		if (number < randomNumber)
		{
			if (isNumberWithinRange(number, randomNumber - 2, randomNumber))
			{
				return PLUSMINUS2;
			}
			return LOWER;
		}
		else if (number > randomNumber)
		{
			if (isNumberWithinRange(number, randomNumber, randomNumber + 2))
			{
				return PLUSMINUS2;
			}
			return HIGHER;
		}
	}

	return CORRECT;
}

bool isNumberWithinRange(unsigned int number, unsigned int Range1, unsigned int Range2)
{
	return (number <= Range2 && number >= Range1);
}