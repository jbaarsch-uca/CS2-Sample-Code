// This program demonstrates Rectangle class exceptions.
#include <iostream>
#include "Rectangle.h"
#include "EvenEater.h"
#include <string>
#include <vector>
#include "Box.h"
#include "Stack.h"
#include "Matrix.h"
using namespace std;

void initializeRectangle(Rectangle* rect);
template <class T> vector<T> box(T contents);

template <class T> T maxValue(T a, T b);
template <class T> void printArray(T arr[], int size);


int main()
{

    Matrix<string> numbers(3, 4);
    for (int r = 0; r < 3; r++)
        for (int c = 0; c < 4; c++) {
            numbers.set(r, c, "Number " + to_string(r * 4 + c + 1));
        }

    cout << numbers.toString() << endl;



    Stack<string> cities("Conway");
    cities.push("Maumelle");
    cities.push("Sherwood");
    cities.push("Little Rock");

    cout << cities.top() << endl;
    cout << cities.pop() << endl;
    cout << cities.top() << endl;
    cout << cities.isEmpty() << endl;



    string words[3] = { "I", "love", "cats" };

    printArray(words, 3);

    cout << endl << endl;


    cout << maxValue<int>(13, 7) << endl << endl;



    Box<string> myBox("Tissues");

    cout << myBox.getContents() << endl;


    Rectangle myRectangle;
    myRectangle.setWidth(30);
    myRectangle.setLength(40);


    cout << static_cast<double>(myRectangle) << endl;

    vector<Rectangle> rectangles = box<Rectangle>(myRectangle);
    for (Rectangle r : rectangles)
        cout << r.getLength() << endl;

    vector<string> contents = box<string>("A rabbit");
    for (string c : contents)
        cout << c << endl;

    /*
    EvenEater hungry;

    for (int i = 0; i < 10; i++) {

        int num;
        try {
        
        cout << "Please enter an integer for the EvenEater to eat." << endl;
        cin >> num;
        cout << hungry.eat(num) << endl;
        }
        catch (EvenEater::OddFoodException e) {
            cout << e.getMessage() << endl;
        }
    }



  /*
   
   // Create a Rectangle object.
   Rectangle myRectangle;

   
   // Store these values in the Rectangle object.
   try {
       initializeRectangle(&myRectangle);
   
   cout << "The area of the rectangle is "
       << myRectangle.getArea() << endl;
   cout << "End of the program.\n";
   return 0;

   }
   catch (Rectangle::NegativeLengthException e) {
       cout << "Could not finish initializing Rectangle.  Error was found" << endl;
       return 3;
   }
   */
}


void initializeRectangle(Rectangle* rect) {
    cout << "Initializing Rectangle" << endl;

    int width;
    int length;

    // Get the width and length.
    do  {
        try
        {

            cout << "Enter the rectangle's width: ";
            cin >> width;
            rect->setWidth(width);
        }
        catch (Rectangle::NegativeWidthException e) {

            cout << "Error: " << e.getValue()
                << " is an invalid value for the"
                << " rectangle's width.\n";
        }
    } while (width < 0);
    do {
        try {
            cout << "Enter the rectangle's length: ";
            cin >> length;
            rect->setLength(length);
        }
        catch (Rectangle::NegativeLengthException e)
        {
            cout << "Error: " << e.getValue()
                << " is an invalid value for the"
                << " rectangle's length.\n";
        }
    } while (length < 0);
    cout << "Finished Initializing Rectangle." << endl;
}

template <class T> vector<T> box(T contents) {
    vector<T> theseContents;
    theseContents.push_back(contents);
    return theseContents;
}

template <class T> T maxValue(T a, T b) {
    if (a > b)
        return a;
    else
        return b;
}

template <class T> void printArray(T arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << endl;
    }
}