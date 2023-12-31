#pragma once

#include <iostream>
#include "Book.cpp"
#include "DynamicArray.h"
using namespace std;
class ShoppingList {
private:
	List<Book> books;
	int size;
	Book* boooks;
	public:
        ShoppingList();
		//~ShoppingList();
		ShoppingList(int initialcapacity);

		void addBookToShoppingList(Book book);
		void removeBookFromShoppingList(Book book);
		void print();
		List<Book> getShoppingList();
};
