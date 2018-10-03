#include "SparkLine.h"
#define character 219
#define amountSpaces 20


SparkLine::SparkLine()
{
}

void SparkLine::draw(int numbers[], int size)
{
	int y = this->getHighestValue(numbers, size);
	for (int i = 0; i < size; i++)
	{
		this->drawHistogramOfOnlyOneNumber(numbers[i], i, y);
	}
	//this->gotoxy(1, this->getHighestValue(numbers, 3));
	//cout << char(character) << endl;
}

int SparkLine::getHighestValue(int numbers[], int size)
{
	int highNum;
	for (int m = 0; m < size; m++)
	{
		if (m == 0) {
			highNum = numbers[m];
		}
		if (numbers[m] > highNum) {
			highNum = numbers[m];
		}
	}
	return highNum;
}

void SparkLine::drawHistogramOfOnlyOneNumber(int number, int x, int y)
{
	for (int i = 0; i < number; i++)
	{
		this->gotoxy(x + amountSpaces, y - i);
		cout << char(character);
	}
}



SparkLine::~SparkLine()
{
}

void SparkLine::gotoxy(int x, int y)
{
	COORD c = { x, y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
}
