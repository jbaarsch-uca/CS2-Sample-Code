#ifndef BOOK
#define BOOK
#include <iostream>
using namespace std;


class Book
{
private:  
	const string author;
	const string title;
	int pageCount;

public:
	Book();
	Book(string a, string t, int pC);
	string getAuthor() const;
	string getTitle() const;
	int getPageCount() const;
	void setAuthor(string a);
	void setTitle(string t);
	void setPageCount(int pC);

	string getBookDescription() const;
};

