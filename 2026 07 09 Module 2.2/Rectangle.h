#ifndef RECTANGLE_H
#define RECTANGLE_H
#pragma once

#include <iostream>
using namespace std;

class Rectangle {
private:
    int length;
    int width;

public:
    Rectangle();
    Rectangle(int l, int w);
    void setLength(int l);
    void setWidth(int w);
    int getWidth();
    int getLength();
    int getArea();

};


#endif





