#include<cstdio>
#include<iostream>
#include<conio.h>

int TrailingZeros(int iFactorial);
int Factorial(int iNumber);

int main()
{
	int iNumber;

	std::cout << "Enter the number to find trailing zeros of its factorial : ";
	std::cin >> iNumber;

	std::cout << "\nThe factorial of a number is : " << Factorial(iNumber);

	std::cout << "\n" << "The trailing zeros in the factorial of enter number are : ";
	std::cout << TrailingZeros(Factorial(iNumber));

	_getch();
	return 0;
}

int TrailingZeros(int iFactorial)
{
	int iZeroCount = 0;
	while (iFactorial % 10 == 0)
	{
		iZeroCount++;
		iFactorial = iFactorial / 10;
	}
	
	return iZeroCount;
}

int Factorial(int iNumber)
{
	if (iNumber > 1)
	{
		return iNumber * Factorial(iNumber - 1);
	}
	return iNumber;
}
