#include "DotPlot.h"



DotPlot::DotPlot()
{
}

void DotPlot::draw(int numbers[], int size)
{
}

int DotPlot::getHighestValue(int numbers[], int size)
{
	return 0;
}


void DotPlot::drawHistogramOfOnlyOneNumber(int number, int x, int y)
{
}

DotPlot::~DotPlot()
{
}

void DotPlot::gotoxy(int x, int y)
{
	COORD c = { x, y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
}
