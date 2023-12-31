#pragma once

#include <iostream>
#include "Book.h"
#include "DynamicArray.h"
using namespace std;
class ShoppingList {
private:
	List<Book> books;
	int size;
	double total;
	Book* boooks;
public:
	ShoppingList();
	ShoppingList(int initialcapacity);

	void addBookToShoppingList(Book book);
	void removeBookFromShoppingList(Book book);
	void print();
	double totalamount();
	Book get(int pos);

};

