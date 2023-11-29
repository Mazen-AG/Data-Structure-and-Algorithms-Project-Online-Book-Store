

#include <string>
#include "Book.h"
//#include "BinaryTree.h"
//#include "Catalog.h"

using namespace std;

BinaryTree<Book> catalog;

Catalog::Catalog(BinNode<Book>* rootNode) {
	this->rootNode = rootNode;
}

void addBook(Book book) {
	catalog.insert(book);
}

void removeBook(Book book) {
	catalog.deleteNode(book);
}

void print() {
	//catalog.inOrderTraversal(std::ostream & out, catalog.root);
}