#pragma once

#include <iostream>
#include "Catalog.h"
#include "Book.h"
#include "Dynamic Array.h"

class ShoppingList {
private:
	List<Book> books[100];
	int size;
	public:
		ShoppingList();
		void addBookToShoppingList(Book book);
		void removeBookFromShoppingList(Book book);
		void print();
};