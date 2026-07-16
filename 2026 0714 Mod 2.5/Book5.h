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
	Book() : Book ("Anonymous", "Titleless", 0) {};
	Book(string a, string t, int pC){
		author = a;
		title = t;
		pageCount = pC;
	};
	string getAuthor() const;
	
};
#endif