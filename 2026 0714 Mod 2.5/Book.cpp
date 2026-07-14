#include "Book.h"

Book::Book() : Book("Anonymous", "Titleless", 0) {

}
Book::Book(string a, string t, int pC) {
	author = a;
	title = t;
	pageCount = pC;
}
string Book::getAuthor() const {
	return author;
}
string Book::getTitle() const {
	return title;
}
int Book::getPageCount() const {
	return pageCount;
}
void Book::setAuthor(string a) {
	author = a;
}
void Book::setTitle(string t) {
	title = t;
}
void Book::setPageCount(int pC) {
	pageCount = pC;
}

string Book::getBookDescription() const {
	string result = "";
	result += title + " by " + author;
	return result;
}
