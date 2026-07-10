#ifndef RECTANGLE_CONSOLE
#define RECTANGLE_CONSOLE
#include "Rectangle.h"
#include <iostream>
class RectangleConsole
{
private: 
	ostream* outStream;
	istream* inStream;
public: 
	RectangleConsole();
	RectangleConsole(ostream* ostream, istream* istream);
	int getInt(string label);
	void displayRectangle(Rectangle rect, int displayType = 0);
	void displayText(string text);

};

#endif
