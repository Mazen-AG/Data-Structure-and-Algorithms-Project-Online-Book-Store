#pragma once
#include <iostream>
#include "Book.h"
#include "DynamicArray.h"
#include "Catalog.h"

using namespace std;

template <typename T>
class Search{
private:
	List<Book> foundBooks[1];
public:
	Search();
	List<Book> searchByTitle(Catalog catalog, string title);
	List<Book> searchByAuthor(Catalog catalog, string author);
	List<Book> searchByPublisher(Catalog catalog, string publisher);
	List<Book> searchByISBN(Catalog catalog, int isbn);
	List<Book> searchByCategory(Catalog catalog, string category);
	List<Book> searchByAvailability(Catalog catalog, bool available);
	List<Book> searchByQuantity(Catalog catalog, int quantity);
	void clearSearch();
	void print();
};
