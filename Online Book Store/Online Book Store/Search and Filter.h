#pragma once
#include <iostream>
#include "Book.h"
#include "Dynamic Array.h"
#include "Catalog.h"

using namespace std;

template <typename T>
class Search{
private:
	List<Book> foundBooks[1];
public:
	Search();
	void searchByTitle(Catalog catalog, string title);
	void searchByAuthor(Catalog catalog, string author);
	void searchByPublisher(Catalog catalog, string publisher);
	void searchByISBN(Catalog catalog, int isbn);
	void searchByCategory(Catalog catalog, string category);
	void searchByAvailability(Catalog catalog, bool available);
	void searchByQuantity(Catalog catalog, int quantity);
	void print();
};

};