#pragma once

using namespace std;
#include <string>
#include "Book.h"


class Catalog {
	private:
		BinNode<Book>* rootNode;
		int size = 0;
	public:
		Catalog(BinNode<Book>* rootNode);
		void addBook(Book book);
		void removeBook(Book book);
		void print();
};
