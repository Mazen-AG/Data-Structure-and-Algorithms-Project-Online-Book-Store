#pragma once

using namespace std;
#include <string>
#include "Book.h"
#include "BinaryTree.h"

class Catalog {
private:
	BinaryTree<Book> catalog;
	int size = 0;
	BinNode<Book>* rootNode;

public:
	Catalog();
	void addBook(Book book);
	void removeBook(Book book);
	void print(ostream& out);
};
