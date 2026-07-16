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
	string author() const;
	void setAuthor(string a);
	string title() const;
	void setTitle(string t);
	int pageCount();
	void setPageCount(int pC);
	
};
#endif