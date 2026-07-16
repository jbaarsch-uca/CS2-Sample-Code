#ifndef BOOK
#define BOOK
#include <iostream>
using namespace std;


class Book
{
private:  
	string author;
	string title;
	int pageCount;

public:
	Book() : Book ("Anonymous", "Titleless", 0) {};
	Book(string a, string t, int pC){
		author = a;
		title = t;
		pageCount = pC;
	};
	string getAuthor() const;
	void setAuthor(string a) const;
	string getTitle() const;
	void setTitle(string t) const;
	int getPageCount() const;
	void setPageCount(int pC) const;
	
};
#endif