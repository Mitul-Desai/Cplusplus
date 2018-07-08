#include<cstdio>
#include<conio.h>
#include<iostream>

void PrintEshName();

int main()
{
	PrintEshName();

	_getch();
	return 0;
}

void PrintEshName()
{
	char cPostfix[] = "esh";
	char cName[10] = "";
	const unsigned int limit = 20;

	std::cout << "Enter your name : ";
	std::cin >> cName;

	if (strnlen_s(cName,5) < 5)
	{
		std::cout << "The name should atleast contain 5 characters.\n\n";
		PrintEshName();
	}
	else
	{
		char cFinalName[limit] = "";

		strncpy_s(cFinalName, cName, 3);
		strcat_s(cFinalName, cPostfix);

		for (unsigned int i = 0; i < strlen(cFinalName); i++)
		{
			char cCharacter = toupper(cFinalName[i]);
			std::cout << cCharacter;
		}
	}
}
