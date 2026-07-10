#include "RectangleDriver.h"


RectangleDriver::RectangleDriver() : RectangleDriver(new RectangleConsole()) {

}
RectangleDriver::RectangleDriver(RectangleConsole* rC) {
	rectCons = rC;
}
Rectangle RectangleDriver::createRectangle() {
    int length, width;
    length = rectCons->getInt("Length");
    width = rectCons->getInt("Width");
    Rectangle* rect = new Rectangle(length, width);
    return *rect;

}
void RectangleDriver::displayRectangle(Rectangle* r, int displayOption) {
    rectCons->displayRectangle(*r, displayOption);
}
