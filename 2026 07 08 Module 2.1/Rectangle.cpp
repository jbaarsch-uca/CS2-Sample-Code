#include "Rectangle.h"

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
