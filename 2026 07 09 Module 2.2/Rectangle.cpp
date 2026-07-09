#include "Rectangle.h"

Rectangle::Rectangle() : length(1), width(1) {
}

Rectangle::Rectangle(int l, int w) {
    length = l;
    width = w;
}

void Rectangle::setLength(int l) {
    length = l;
}
void Rectangle::setWidth(int w) {
    width = w;
}
int Rectangle::getWidth() {
    return width;
}
int Rectangle::getLength() {
    return length;
}
int Rectangle::getArea() {
    return length * width;
}
