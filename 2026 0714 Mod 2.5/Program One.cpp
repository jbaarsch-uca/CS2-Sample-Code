// Name:  Jon Baarsch
// Class: CS2
// Term:  Summer, 2026
// Created: 7/14/2026 9:42:34 AM

#include <iostream>
#include <vector>
#include "InventoryItem.h"
#include "Book.h"
#include "BookShelf.h"
using namespace std;


int main()
{
    Book aBook;
    Book anotherBook("Herman Melville", "Moby Dick", 649);

    cout << aBook.getBookDescription() << endl;
    cout << anotherBook.getBookDescription() << endl;

    Book* books = new Book[2];
    books[0] = anotherBook;
    books[1] = aBook;

    BookShelf myShelf(books, 2);

    cout << myShelf.showBookShelf() << endl;

    myShelf.alphabetize();

    cout << myShelf.showBookShelf() << endl;
    
}
