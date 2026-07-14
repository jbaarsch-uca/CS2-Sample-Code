#include "BookShelf.h"

BookShelf::BookShelf() : BookShelf(new Book[0], 0) {
}
BookShelf::BookShelf(Book* bs, int s) {
	books = bs;
	size = s;
}
BookShelf::~BookShelf() {
	delete[] books;
	books = nullptr;
	size = 0;
}
Book* BookShelf::getBooks() const {
	return books;
}
int BookShelf::getSize() const {
	return size;
}
void BookShelf::setBooks(Book* bs) {
	books = bs;
}
void BookShelf::setSize(int s) {
	size = s;
}
void BookShelf::alphabetize() {
	
	for (int i = 0; i < size - 1; i++) {
		int minIndex = i;
		for (int j = i + 1; j < size; j++)
			if (toUpper(books[minIndex].getAuthor()) > toUpper(books[j].getAuthor()))
				minIndex = j;
		swap(books[i], books[minIndex]);

	}
}
string BookShelf::showBookShelf() const {
	string result = "A book shelf containing: \n";
	for (int i = 0; i < size; i++)
		result += "\t" + books[i].getBookDescription() + "\n";
	return result;
}

void BookShelf::swap(Book& book1, Book& book2) {
	Book tempBook = book1;
	book1 = book2;
	book2 = tempBook;
}

string BookShelf::toUpper(string str) {
	string result = "";
	for (int i = 0; i < str.size(); i++)
		result += toupper(str[i]);

	return result;
}