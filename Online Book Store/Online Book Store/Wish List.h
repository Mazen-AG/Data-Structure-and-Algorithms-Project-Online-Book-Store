#pragma once

#include <iostream>
#include "Catalog.h"
#include "Book.h"
#include "Dynamic Array.h"

class WishList {
private:
	List<Book> books[100];
	int size;
	public:
		WishList();
		void addBookToWishList(Book book);
		void removeBookFromWishList(Book book);
		void print();
		List<Book> getWishList();

};