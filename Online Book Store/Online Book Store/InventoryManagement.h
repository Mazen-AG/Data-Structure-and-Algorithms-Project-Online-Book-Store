#pragma once
#include <iostream>
#include "Book.h"
#include "DynamicArray.h"
#include "BinaryTree.h"

class InventoryManagement
{
private:
	List<Book> inventory;
	BinaryTree<Book> inventorytree;
	int size;
	bool bookadding;
	bool bookremoving;
	int removingindex;
public:
	InventoryManagement();
	InventoryManagement(int inventorysize);
	void addBook(Book newbook);
	void removeBook(Book booktoremove);
	void search(const string& factor, const string& factorName);
	void clear();
	void viewInventory();
	void AvailabilityUpdate(); 

  
};