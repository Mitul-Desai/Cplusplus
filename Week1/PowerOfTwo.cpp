// 4. Check if a number is power of 2 or not
// NOTE : Currently the negative power of 2 is not considered here.

#include <stdio.h>
#include<conio.h>
#include<iostream>

bool isPowerOfTwo(unsigned int iNumber);

int main()
{
	unsigned int iNumber=0;

	std::cout << "Enter the number : ";
	std::cin >> iNumber;

	bool bResult = isPowerOfTwo(iNumber);

	if (bResult)
	{
		std::cout << "The nunmber entered is power of 2.";
	}
	else
	{
		std::cout << "The nunmber entered is not power of 2.";
	}

	_getch();
	
	return 0;
}

bool isPowerOfTwo(unsigned int iNumber)
{
	if (0 == iNumber)
	{
		return false;
	}

	while (0 == iNumber % 2)
	{
		iNumber = iNumber / 2;
	}

	return (1 == iNumber);
}
