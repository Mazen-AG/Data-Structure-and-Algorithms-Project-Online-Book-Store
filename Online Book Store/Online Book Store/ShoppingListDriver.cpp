#include "ShoppingCart.h"
using namespace std;

ShoppingList::ShoppingList() : size(0), books(100) {}


ShoppingList::ShoppingList(int initialCapacity) : size(0), books(initialCapacity) {}
void ShoppingList::addBookToShoppingList(Book book) {
    if (size < 100) {
        books.insert(book, size);
        size++;
    }
    else {
        cout << "Shopping list is full. Cannot add more books." << endl;
    }
}

void ShoppingList::removeBookFromShoppingList(Book book) {
    for (int i = 0; i < size; ++i) {
        if (books.empty()) break;

        if (boooks[i] == book) {
            books.erase(i);
            size--;
            return;
        }
    }
    cout << "Book not found in the shopping list." << endl;
}

void ShoppingList::print() {
    for (int i = 0; i < size; ++i) {
        cout << "Book " << i + 1 << ":" << endl;
        books.display(cout);
    }
}

List<Book> ShoppingList::getShoppingList() {
    List<Book> shoppingListCopy(100); // Assuming you have a constructor that takes an int parameter

  /*  for (int i = 0; i < size; ++i) {
        shoppingListCopy.insert(books[i], i);
    } */
    return shoppingListCopy;
}

