

#include <string>
#include "Book.h"
#include "BinaryTree.h"
#include "Catalog.h"

using namespace std;

Catalog::Catalog(BinNode<Book>* rootNode) {
	this->rootNode = rootNode;
}

void addBook(Book book) {

}