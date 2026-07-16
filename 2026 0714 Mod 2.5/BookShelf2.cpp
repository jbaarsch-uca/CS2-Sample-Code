#include <iostream>
using namespace std;

class BookShelf {
	private:
		Book books[5];
	public:
	BookShelf();
}

BookShelf::BookShelf() {
	books[0] = new Book();
	books[1] = new Book();
	books[2] = new Book();
	books[3] = new Book();
	books[4] = new Book();
	books[5] = new Book();
}
