#ifndef RECTANGLE_DRIVER
#define RECTANGLE_DRIVER
#include "RectangleConsole.h"
#include "Rectangle.h"
class RectangleDriver
{

private:
	RectangleConsole* rectCons;
public:
	RectangleDriver();
	RectangleDriver(RectangleConsole* rC);
	Rectangle createRectangle();
	void displayRectangle(Rectangle* r, int displayOption = 0);

};

#endif