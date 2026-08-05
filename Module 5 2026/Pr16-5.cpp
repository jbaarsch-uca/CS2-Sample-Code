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

long long factorial(int number) {
    
    if (number == 0)
        return 1;
    return number * factorial(number - 1);
}

int fib(int n)
{
    if (n <= 0)
        return 0;                       // Base case
    else if (n == 1)
        return 1;                       // Base case
    else
        return fib(n - 1) + fib(n - 2); // Recursive case
}

void quickSort(int[], int, int);
int partition(int[], int, int);
void swap(int&, int&);


// 4!  = 4 * 3 * 2 * 1 == 4 * 3!

int main()
{

    cout << factorial(13) << endl;
    
    for (int i = 1; i <= 19; i++)
        cout << fib(i) << " ";
    cout << endl;
    const int SIZE = 10;  // Array size
    int count;            // Loop counter
    int array[SIZE] = { 7, 3, 9, 2, 0, 1, 8, 4, 6, 5 };

    // Display the array contents.
    for (count = 0; count < SIZE; count++)
        cout << array[count] << " ";
    cout << endl;

    // Sort the array.
    quickSort(array, 0, SIZE - 1);

    // Display the array contents.
    for (count = 0; count < SIZE; count++)
        cout << array[count] << " ";
    cout << endl;

    /*
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


//************************************************
// quickSort uses the quicksort algorithm to     *
// sort set, from set[start] through set[end].   *
//************************************************

void quickSort(int set[], int start, int end)
{
    int pivotPoint;
    
    if (start < end)
    {
        // Get the pivot point.
        pivotPoint = partition(set, start, end);
        // Sort the first sub list.
        quickSort(set, start, pivotPoint - 1);
        // Sort the second sub list.
        quickSort(set, pivotPoint + 1, end);
    }
}

//**********************************************************
// partition selects the value in the middle of the        *
// array set as the pivot. The list is rearranged so       *
// all the values less than the pivot are on its left      *
// and all the values greater than pivot are on its right. *
//**********************************************************

int partition(int set[], int start, int end)
{
    int pivotValue, pivotIndex, mid;

    mid = (start + end) / 2;
    swap(set[start], set[mid]);
    pivotIndex = start;
    pivotValue = set[start];
    for (int scan = start + 1; scan <= end; scan++)
    {
        if (set[scan] < pivotValue)
        {
            pivotIndex++;
            swap(set[pivotIndex], set[scan]);
        }
    }
    swap(set[start], set[pivotIndex]);
    return pivotIndex;
}

//**********************************************
// swap simply exchanges the contents of       *
// value1 and value2.                          *
//**********************************************

void swap(int& value1, int& value2)
{
    int temp = value1;

    value1 = value2;
    value2 = temp;
}