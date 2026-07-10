#include "RectangleConsole.h"


RectangleConsole::RectangleConsole() : 
	RectangleConsole(&cout, &cin) {}

RectangleConsole::RectangleConsole(ostream* ostream, istream* istream) {
	outStream = ostream;
	inStream = istream;
}

int RectangleConsole::getInt(string label) {
	*(outStream) << "Please enter an integer representing " <<
		label << endl;
	int num;
	*(inStream) >> num;
	return num;
}
void RectangleConsole::displayRectangle(Rectangle rect, int displayType) {
	if (displayType == 0) {
		*(outStream) << "A Rectangle with : \n"
			<< "Length: " << rect.getLength() << endl
			<< "Width: " << rect.getWidth() << endl;
	}
	else if (displayType == 1) {
		for (int i = 0; i < rect.getWidth(); i++) {
			*(outStream) << "-";
		}
		*(outStream) << endl;
		for (int i = 0; i < rect.getLength(); i++) {
			*(outStream) << "|";
			for (int i = 1; i < rect.getWidth() - 1; i++) {
				*(outStream) << " ";
			}
			*(outStream) << "|" << endl;
		}
		for (int i = 0; i < rect.getWidth(); i++) {
			*(outStream) << "-";
		}
		*(outStream) << endl;
	} else 
		
		*(outStream) << "error" << endl;
}

void RectangleConsole::displayText(string text) {
	*(outStream) << text << endl;
}
