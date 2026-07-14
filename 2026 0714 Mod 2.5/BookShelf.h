#pragma once
#include "Book.h"
using namespace std;

class BookShelf
{
private:
	Book* books;
	int size;
	void swap(Book& book1, Book& book2);
	string toUpper(string str);
public: 
	BookShelf();
	BookShelf(Book* bs, int s);
	~BookShelf();
	Book* getBooks() const;
	int getSize() const;
	void setBooks(Book* bs);
	void setSize(int s);
	void alphabetize();
	string showBookShelf() const;



};

