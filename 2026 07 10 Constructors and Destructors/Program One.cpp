// Name:  Jon Baarsch
// Class: CS2
// Term:  Summer, 2026
// Created: 7/10/2026 9:41:23 AM

#include <iostream>
#include "RectangleConsole.h"
#include "Rectangle.h"
#include "RectangleDriver.h"
using namespace std;

int main()
{
    RectangleConsole* console = new RectangleConsole();
    RectangleDriver* driver = new RectangleDriver();

    Rectangle rect = driver->createRectangle();
    driver->displayRectangle(&rect);
    driver->displayRectangle(&rect,
        (int)Rectangle::DisplayType::ASCII_ART);
    cout << rect.getColor();
}
