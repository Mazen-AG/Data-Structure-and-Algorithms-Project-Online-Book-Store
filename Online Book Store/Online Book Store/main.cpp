#include "DynamicArray.h"
#include "Book.h"
#include "WishList.h"
#include "InventoryManagement.h"
#include "Catalog.h"
#include "ShoppingList.h"
#include "OrderTracking.h"
#include "User.h"
#include "Payment.h";
#include <iostream>


int main()



{

//TEST CODE THAT WORKS
	/*
WishList W(3);
	

	InventoryManagement inv(10);
	W.addBookToWishList(book1);
	inv.addBook(book1);
	inv.addBook(book1);
	//inv.clear();
	inv.viewInventory(); 

	Catalog catalog;
	catalog.addBook(book1);
	catalog.print();
	

	List<int> list;

	list.insert(3,0);
	list.insert(34, 1); */
	Book book1,book2,book3;
	book1.setAuthor("e");
	book1.setISBN("32523523");
	book1.setTitle("ere");
	book2.setTitle("3ere");
	book1.setPrice(4242);
	book2.setPrice(4242);
	ShoppingList shopping;

	CreditCard pay;

	pay.setAmount(4242);

	shopping.addBookToShoppingList(book1);
	shopping.addBookToShoppingList(book2);
	shopping.addBookToShoppingList(book3);


	cout << pay.PaymentProcess(shopping);
	
 
		
}




