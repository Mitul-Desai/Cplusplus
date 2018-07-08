#include <stdio.h>
#include <conio.h>
#include <iostream>

enum result
{
	THREE,
	FIVE,
	BOTH,
	NONE,
	COUNT
};

result isDivisible(unsigned int iNumber);

int main()
{
	unsigned int iNumber;
	result eResult;

	std::cout << "Enter the number : ";
	std::cin >> iNumber;

	eResult = isDivisible(iNumber);

	switch (eResult)
	{
		case THREE:
		{
			std::cout << "Shivaji";
			break;
		}
		case FIVE:
		{
			std::cout << "Maharaj";
			break;
		}
		case BOTH:
		{
			std::cout << "Shivaji Maharaj Ki Jai";
			break;
		}
		case NONE:
		{
			std::cout << "The number you entered is not divisible by 3 or 5.";
			break;
		}
		default:
		{
			std::cout << "The number you entered is incorrect.";
			break;
		}
	}

	_getch();

	return 0;
}

result isDivisible(unsigned int iNumber)
{
	if (0 == iNumber % 3 || 0 == iNumber % 5)
	{
		if (0 == iNumber % 3 && 0 == iNumber % 5)
		{
			return BOTH;
		}
		else
		{
			if (0 == iNumber % 3)
			{
				return THREE;
			}
			else
			{
				return FIVE;
			}
		}
	}
	else
	{
		return NONE;
	}
}
