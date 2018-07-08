// 5. Print these

// 1
// 1 2
// 1 2 3
// 1 2 3 4
// 1 2 3 4 5
//
//
// * * * * *
// * * * *
// * * *
// * *
// *
//
//			*
//		  * * *
//		* * * * *
//	  * * * * * * *
//	* * * * * * * * *
//
//
//	* * * * * * * * *
//	  * * * * * * *
//		* * * * *
//		  * * *
//			*
//
//
// *       *
//  *     *
//   *   *
//    * *
//    * *
//   *   *
//  *     *
// *       *

// *                   *
// * * *           * * *
// * * * * *   * * * * *
// * * * * * * * * * * *
//
//
// *                         *
//	  *                   *
// *     *             *     *
//    *     *       *     *
// *     *      *      *     *
//    *     *       *     *
// *     *             *     *
//    *                   *
// *                         *
//
//
//	*   *   *   *   *
//	  *   *   *   *
//	    *   *   *
//	      *   *
//	        *
//	      *   *
//	    *   *   *
//	  *   *   *   *
//	*   *   *   *   *
//
//
//	* * * * * * * * *
//	* * * *   * * * *
//	* * *       * * *
//	* *           * *
//	*               *
//	* *           * *
//	* * *       * * *
//	* * * *   * * * *
//	* * * * * * * * *
//
//
//* * * * * * * * * * * * * * * * *
//	* * * * * * *   * * * * * * *
//	  * * * * *       * * * * *
//		* * *           * * *
//		  * * * * * * * * *
//			* * * * * * *
//			  * * * * *
//				* * *
//				  *
//
//
//
//	* * * * * * * * * * * * * * * * * * * * * * * * *
//	  *           *   *           *   *           *
//		*       *       *       *       *       *
//		  *   *           *   *           *   *
//			*               *               *
//		  *   *           *   *           *   *
//		*       *       *       *       *       *
//	  *           *   *           *   *           *
//	* * * * * * * * * * * * * * * * * * * * * * * * *
//
//
//	* * * * * * *
//	*           *
//	* *       * *
//	* * *   * * *
//	* * * * * * *
//	* * *   * * *
//	* *       * *
//	*           *
//	* * * * * * *


#include<stdio.h>
#include<conio.h>
#include<iostream>

void drawPattern1();
void drawPattern2();
void drawPattern3();
void drawPattern4();
void drawPattern5();
void drawPattern6();
void drawPattern7();
void drawPattern8();
void drawPattern9();

int main()
{
	//Pattern - 1
	//drawPattern1();

	//Pattern - 2
	//drawPattern2();

	//Pattern - 3
	//drawPattern3();

	//Pattern - 4
	//drawPattern4();

	//Pattern - 5
	//drawPattern5();

	//Pattern - 6 - Remaining
	//drawPattern6();

	//Pattern - 7 - Remaining
	//drawPattern7();

	//Pattern - 8
	//drawPattern8();

	//Pattern - 9
	drawPattern9();

	_getch();
	
	return 0;
}

void drawPattern1()
{
	unsigned int iNumber = 1;

	std::cout << "\n Enter the max number to draw the first pattern : ";
	std::cin >> iNumber;

	if (iNumber > 0)
	{
		for (unsigned int i = 1; i <= iNumber; i++)
		{
			for (unsigned int k = 1; k <= i; k++)
			{
				std::cout << k << " ";
			}
			std::cout << "\n";
		}
	}
	else
	{
		std::cout << "Number must be greater than 0";
	}
}

void drawPattern2()
{
	unsigned int iNumber = 1;

	std::cout << "\n Enter the max number to draw the second pattern : ";
	std::cin >> iNumber;

	if (iNumber > 0)
	{
		for (unsigned int i = iNumber; i > 0; i--)
		{
			for (unsigned int k = 1; k <= i; k++)
			{
				std::cout << "*" << " ";
			}
			std::cout << "\n";
		}
	}
	else
	{
		std::cout << "Number must be greater than 0";
	}
}

void drawPattern3()
{
	unsigned int iNumber = 1;

	std::cout << "\n Enter the max number to draw the third pattern : ";
	std::cin >> iNumber;

	if (iNumber > 0)
	{
		for (unsigned int i = 1; i <= iNumber; i++)
		{
			for (unsigned int j = iNumber-i; j >= 1; j--)
			{
				std::cout << "  ";
			}
			for (unsigned int k = 1; k <= i+(i-1); k++)
			{
				std::cout << "*" << " ";
			}
			std::cout << "\n";
		}
	}
	else
	{
		std::cout << "Number must be greater than 0";
	}
}

void drawPattern4()
{
	unsigned int iNumber = 1;

	std::cout << "\n Enter the max number to draw the fourth pattern : ";
	std::cin >> iNumber;

	if (iNumber > 0)
	{
		for (unsigned int i = iNumber; i >= 1; i--)
		{
			for (unsigned int j = 1; j <= iNumber - i; j++)
			{
				std::cout << "  ";
			}
			for (unsigned int k = 1; k <= i + (i - 1); k++)
			{
				std::cout << "*" << " ";
			}
			std::cout << "\n";
		}
	}
	else
	{
		std::cout << "Number must be greater than 0";
	}
}

void drawPattern5()
{
	unsigned int iNumber = 1;

	std::cout << "\n Enter the max number to draw the fifth pattern : ";
	std::cin >> iNumber;

	if (iNumber > 0)
	{
		for (unsigned int i = iNumber; i > 1; i--)
		{
			for (unsigned int j = 1; j <= iNumber - i; j++)
			{
				std::cout << " ";
			}
			for (unsigned int k = 1; k <= i + (i - 1); k++)
			{
				if (k == 1 || k == i + (i - 1))
				{
					std::cout << "*";
				}
				else
				{
					std::cout << " ";
				}
			}
			std::cout << "\n";
		}

		for (unsigned int i = 2; i <= iNumber; i++)
		{
			for (unsigned int j = iNumber - i; j >= 1; j--)
			{
				std::cout << " ";
			}
			for (unsigned int k = 1; k <= i + (i - 1); k++)
			{
				if (k == 1 || k == i + (i - 1))
				{
					std::cout << "*";
				}
				else
				{
					std::cout << " ";
				}
			}
			std::cout << "\n";
		}
	}
	else
	{
		std::cout << "Number must be greater than 0";
	}
}

void drawPattern6()
{
	unsigned int iNumber = 1;
	unsigned int iTriangleBase = 0;

	std::cout << "\n Enter the max number to draw the third pattern : ";
	std::cin >> iNumber;

	iTriangleBase = (iNumber * 2) + 1;

	if (iNumber > 0)
	{
		for (unsigned int i = 1; i <= iNumber; i++)
		{
			if (iNumber == i)
			{
				for (unsigned int k = 1; k <= (i*(i-1))+2; k++)
				{
					std::cout << "*";
				}
			}
			else
			{
				for (unsigned int j = 1; j < i * 2; j++)
				{
					std::cout << "*";
				}
				for (unsigned int j = 1; j <= iTriangleBase; j++)
				{
					std::cout << " ";
				}
				if (iTriangleBase != 1)
				{
					iTriangleBase -= 4;
				}
				for (unsigned int k = 1; k < i * 2; k++)
				{
					std::cout << "*";
				}
			}
			std::cout << "\n";
		}
	}
	else
	{
		std::cout << "Number must be greater than 0";
	}
}

void drawPattern7()
{
	unsigned int iNumber = 1;

	std::cout << "\n Enter the max number to draw the seventh pattern : ";
	std::cin >> iNumber;

	if (iNumber > 0)
	{
		for (unsigned int i = iNumber; i > 0; i--)
		{
			for (unsigned int j = 0; j <= iNumber - i; j++)
			{
				std::cout << " * ";
			}
			for (unsigned int k = 0; k < i-1; k++)
			{
				std::cout << "   ";
			}
			for (unsigned int l = i-1; l > 1; l--)
			{
				std::cout << "   ";
			}
			for (unsigned int j = 0; j <= iNumber - i; j++)
			{
				std::cout << " * ";
			}
			std::cout << "\n";
		}
	}
	else
	{
		std::cout << "Number must be greater than 0";
	}

	if (iNumber > 0)
	{
		for (unsigned int i = 1; i <= iNumber; i++)
		{
			for (unsigned int j = iNumber - i; j > 0; j--)
			{
				std::cout << " * ";
			}
			for (unsigned int k = 0; k < i - 1; k++)
			{
				std::cout << "   ";
			}
			for (unsigned int k = i; k > 0; k--)
			{
				std::cout << "   ";
			}
			for (unsigned int j = iNumber - i; j > 0; j--)
			{
				std::cout << " * ";
			}
			std::cout << "\n";
		}
	}
	else
	{
		std::cout << "Number must be greater than 0";
	}
}

void drawPattern8()
{
	unsigned int iNumber = 1;

	std::cout << "\n Enter the max number to draw the third pattern : ";
	std::cin >> iNumber;

	if (iNumber > 0)
	{
		for (unsigned int i = iNumber; i >= 1; i--)
		{
			for (unsigned int j = 1; j <= iNumber - i; j++)
			{
				std::cout << "  ";
			}
			for (unsigned int k = 1; k <= i; k++)
			{
				std::cout << "*" << "   ";
			}
			std::cout << "\n";
		}
	}
	else
	{
		std::cout << "Number must be greater than 0";
	}

	if (iNumber > 0)
	{
		for (unsigned int i = 2; i <= iNumber; i++)
		{
			for (unsigned int j = iNumber - i; j >= 1; j--)
			{
				std::cout << "  ";
			}
			for (unsigned int k = 1; k <= i; k++)
			{
				std::cout << "*" << "   ";
			}
			std::cout << "\n";
		}
	}
	else
	{
		std::cout << "Number must be greater than 0";
	}
}

void drawPattern9()
{
	unsigned int iNumber = 1;

	std::cout << "\n Enter the max number to draw the ninth pattern : ";
	std::cin >> iNumber;

	if (iNumber > 0)
	{
		for (unsigned int i = iNumber; i > 0; i--)
		{
			for (unsigned int k = 1; k <= i; k++)
			{
				std::cout << " * ";
			}
			std::cout << "\n";
		}
		for (unsigned int i = 1; i < iNumber; i++)
		{
			for (unsigned int k = 0; k <= i; k++)
			{
				std::cout << " * ";
			}
			std::cout << "\n";
		}
	}
	else
	{
		std::cout << "Number must be greater than 0";
	}
}