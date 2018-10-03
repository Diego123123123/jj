#include <iostream>
#include "Main.h"

using namespace std;

int main() {
	SparkLine * sparkLine = new SparkLine();
	int l[] = { 1,2,3,4,7,2,1};
	sparkLine->draw(l, 7);
	int x;
	cin >> x;
	return 3;
}