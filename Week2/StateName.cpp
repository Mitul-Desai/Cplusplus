#include<cstdio>
#include<conio.h>
#include<iostream>

void getstate(const char * p);
void getstate(char & p);

int main()
{
	//const int limit = 30;
	char sentance[] = "Vapi,Gujarat";

	//std::cout << "Enter the sentence in format city, state : ";
	//std::cin >> sentance;

	std::cout << "The name of state using pointers : ";
	getstate(sentance);

	std::cout << "\n\nThe name of state using reference : ";
	getstate(sentance[0]);

	//std::cout << sentance

	_getch();
	return 0;
}

void getstate(const char * p)
{
	const char* cStateName = nullptr;

	for (int i = 0; i <= strlen(p); i++)
	{
		if (p[i] == ',')
		{
			cStateName = &p[++i];
		}
	}
	std::cout << cStateName;
}

void getstate(char & p)
{
	int position = 0;
	for (int i = 0; i <= strlen(&p); i++)
	{
		if (*(&p + (sizeof(p)*i)) == ',')
		{
			position = i + 1;
		}
	}

	for (int j = position; j <= strlen(&p); j++)
	{
		std::cout << *(&p + (sizeof(p)*j));
	}
}