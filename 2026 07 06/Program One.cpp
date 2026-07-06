// Name:  Jon Baarsch
// Class: CS2
// Term:  Summer, 2026

#include <iostream>
using namespace std;

// Code for going over the basics of Pointers.
void pointerBasicsDemo();

// Code for pointers and arrays
void pointerArrayDemo();

//code for Dynamic Memory Allocation
void dynamicMemoryDemo();
string* getNames(int& number);


int main()
{
    cout << "Pointer Basics Demo Code" << endl;
    pointerBasicsDemo();
    cout << endl << endl << endl;
 
    cout << "Pointer Array Demo Code" << endl;
    pointerArrayDemo();
    cout << endl << endl << endl;

    cout << "Dynamic Memory Demo Code" << endl;
    dynamicMemoryDemo();

}



void pointerBasicsDemo() {

    // 1. Declare a string variable and give it a value.
    string name = "Jon";

    // 2.  When you display the variable to the screen, the value 
    // is used rather than the variable name.
    cout << name << endl;  // displays: Jon

    // 3.  You can also access the memory address of the variable by
    // putting an ampersand in front of the variable name.
    cout << &name << endl;  // displays: 0000048476929AE or the like

    // 4.  Now we can store that address in a special type of variable
    // called a "pointer".  Pointers must have a data type associated 
    // with them corresponding to the type of variable they point to.
    string* namePtr = &name;
    cout << namePtr << endl;  // displays: 0000048476929AE or the like

    // 5.  We can access whatever is being stored at that address by 
    // "dereferencing" the pointer.  We do that with the asterisk.
    cout << *namePtr << endl;  // displays: Jon

}

void pointerArrayDemo() {

    // 1. Arrays are essentially constant pointers pointing to the 
    // first item stored in the array.
    string names[] = { "Jon", "Joe", "Katie" };
    cout << &names[0] << endl;  // displays: 0000048476929AE or the like
    cout << names << endl;  // displays: 0000048476929AE or the like
    cout << *names << endl;  // displays: Jon

    // 2. You can use pointer addition to access other members of the 
    // array.  When an integer is added to a pointer, the result is 
    // the memory address advanced that many multiples of the number of
    // cells stored by the data type.  For example, an integer might
    // take up 4 bytes of memory.  If you add 1 to a pointer to an
    // integer, you get a memory address that is 4 bytes ahead of the 
    // original pointer.  If you add 3 to that first pointer, you get 
    // an address that is 24 bytes ahead of that first pointer.  Since
    // the elements of an array are stored sequentially, you can use
    // pointer addition to access the memory address of any item in the 
    // array.
    cout << names[1] << endl;  // displays: Joe
    cout << *(names + 1) << endl;  // displays: Joe
    // note: the pointer addition must happen inside parentheses, with 
    // the dereference operator outside of the parentheses.  This forces
    // the pointer addition to happen first.

    // 3.  In this way there are two ways to access the elements of
    // an array.  "Subscript notation" is what you are used to:
    // arrayName[index]
    // "Pointer notation" uses pointer addition:
    // *(arrayName + index)

}

void dynamicMemoryDemo() {
    // Dynamic Memory Allocation means
    // we allocate the memory of a variable
    // at RUN time rather than compile time.
    
    // We can allocate the size of an array at RUN time rather than 
    // at compile time.  This is useful because we often don't know
    // how much data we will want to collect, and it helps make our
    // programs more dynamic.
    
    int size;
    // dynamic memory is accessed with pointers.
    string* names;

    // get names will dynamically allocate the array.  Size will 
    // be set in the function (passed by reference).
    names = getNames(size);

    for (int i = 0; i < size; i++)
    {
        cout << names[i] << endl;
    }
    
    // It is important to release the memory after using dynamically 
    // allocated memory.  This prevents a "Memory Leak."
    delete[] names;
    // It is also good practice to set the pointer variable to the 
    // null pointer, so that the old memory location is not accidentally
    // accessed, with potentially disasterous results.
    names = nullptr;

}

// string* means that it returns a string pointer.
// int& means that it takes an integer variable passed by reference
// and creates an alias of that variable.  So, if number changes, 
// the value of whatever variable was passed in will also change.
string* getNames(int& number) {

    cout << "How many names do you wish to collect?" << endl;
    cin >> number;

    // Dynamic memory allocation uses the key word "new"
    // When allocating an array, use the array notation with the 
    // size in the brackets.  The size can be a variable and does NOT
    // need to be a constant.
    string* names = new string[number];

    // Populates the values in the array.
    for (int i = 0; i < number; i++) {
        cout << "Please enter a name." << endl;
        cin >> names[i];
    }

    return names;
}
