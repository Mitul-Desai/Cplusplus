#include<stdio.h>
#include<conio.h>
#include<iostream>

int main()
{
	unsigned int binaryNumber=0;
	unsigned int number=0;

	std::cout << "Enter a base ten number non-fractional number : ";
	std::cin >> number;

	while (number > 1)
	{
		number = number / 2;
		binaryNumber += (number % 2) * 10;
	}

	std::cout << "The binary representation of a number is : " << binaryNumber;

	_getch();
	
	return 0;
}