#pragma once
#include<windows.h>
class DotPlot
{
public:
	DotPlot();
	void draw(int numbers[], int size);
	int getHighestValue(int numbers[], int size);
	void drawHistogramOfOnlyOneNumber(int number, int x, int y);
	~DotPlot();
private:
	void gotoxy(int x, int y);
};

