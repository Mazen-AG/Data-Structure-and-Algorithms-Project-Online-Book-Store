#include <C:\Users\saifh\Desktop\dsproject+sln\dsprojectfixing\DynamicArray.h>
#include <C:\Users\saifh\Desktop\dsproject+sln\dsprojectfixing\Book.h>
#include <C:\Users\saifh\Desktop\dsproject+sln\dsprojectfixing\WishList.h>
#include <C:\Users\saifh\Desktop\dsproject+sln\dsprojectfixing\InventoryManagement.h>
#include <iostream>


int main()



{
	WishList W(3);
	Book book1;
	book1.setAuthor("e");

	InventoryManagement inv(10);
	W.addBookToWishList(book1);
	inv.addBook(book1);
	inv.addBook(book1);
	inv.clear();
	inv.viewInventory();
	
		;
}




