#include "MainForm.h"
#include "BinaryTree.h"
#include "Book.h"


#include <iostream>
#include <string>
using namespace std;

int main() {
	string title = "The Great Gatsby";
	string author = "F. Scott Fitzgerald";
	string isbn = "9780743273565";
	string publisher = "Scribner";
	string category = "Fiction";
	double price = 15.00;
	bool available = true;
	int quantity = 5;
	string booktype = "Physical Copy";

	Book testbook(title, author, publisher, isbn, category, price, available, quantity, booktype);
	testbook.print();
	BinaryTree<int> test;
	test.insert(1);
	test.insert(5);
	test.insert(8);
	test.insert(3);
	test.insert(9);
	ostream& out = cout;
	//test.inOrderTraversal(out, test.root);
	return 0;
}
