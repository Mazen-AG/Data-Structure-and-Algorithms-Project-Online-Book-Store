#pragma once

using namespace std;
#include <string>
#include "Book.h"
#include "Dynamic Array.h"

class Catalog {
	private:
	List<Book> books[100];
	int size;
	public:
		Catalog();
		void addBook(Book book);
		void print();
		void removeBook(Book book);

};
