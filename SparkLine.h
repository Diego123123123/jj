#pragma once
#include <iostream>
#include<windows.h>
using namespace std;
class SparkLine
{
public:
	SparkLine();
	void draw(int numbers[], int size);
	int getHighestValue(int numbers[], int size);
	void drawHistogramOfOnlyOneNumber(int number, int x, int y);
	~SparkLine();
private:
	void gotoxy(int x, int y);
};

