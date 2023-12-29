#include "InventoryManagement.h"
#include <thread>


void InventoryManagement::AvailabilityUpdate()
{
	while (true)
	{
		for (int i = 0; i < size; i++)
		{

		}

		/*for (int i = 0; i < size; i++)
		{
			if(inventory.get(i).available)
				cout << "The Book: " << inventory.get(size).getTitle() << "is availibile";
			else 
				cout << "The Book: " << inventory.get(size).getTitle() << "is not availibile";
		}
		std::this_thread::sleep_for(std::chrono::seconds(5)); 


	/*	if (bookadding)
		{
			bookadding = false;
			if (inventory.get(size).available)
			
				cout << "The Book: " << inventory.get(size).getTitle() << "is availibile";
			
			else {
				cout << "The Book: " << inventory.get(size).getTitle() << "is not availibile";
				
			}
		} */
		
		
	}
}
InventoryManagement::InventoryManagement() { size = 0; };

InventoryManagement::InventoryManagement(int inventorysize) : inventory(inventorysize), size(0), bookadding(false) {};

void InventoryManagement::addBook(Book newbook)
{
	//if(newbook.available)
		
	inventory.insert(newbook,size);
	size++;
	bookadding = true;
}

void InventoryManagement::removeBook(Book booktoremove)
{
	if (size == 0)
	{
		cerr << "*** Inventory is empty ***\n";
		return;
	}
	else for (int i = 0; i < size; i++)
	{
		if (booktoremove == inventory.get(i))
		{
			removingindex = i;
			inventory.erase(i);
			size--;

		}
	}
}

void InventoryManagement::search(const string& factor, const string& factorName)
{

}

void InventoryManagement::clear()
{
	if (size == 0)
	{
		cerr << "*** Inventory is empty ***\n";
		return;
	}
	else
	{
		for (int i = size - 1; i >= 0; i--)
			inventory.erase(i);
		size = 0;
		cout << "*** Inventory cleared ***\n";
	}
}

void InventoryManagement::viewInventory()
{
	cout << inventory;
}





