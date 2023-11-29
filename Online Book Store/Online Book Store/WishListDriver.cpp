
#ifndef WISHLIST_DRIVER_H
#define WISHLIST_DRIVER_H

#include <iostream>
//#include "Catalog.h"
#include "Book.h"
#include "DynamicArray.h"
#include "WishList.h"
using namespace std;

WishList::WishList() : size(0), books(100) {} // Assuming 100 as the initial capacity


WishList::WishList(int initialCapacity) : size(0), books(initialCapacity) {}

void WishList::addBookToWishList(Book book) {
    books.insert(book, size);
    size++;
}

    void WishList::removeBookFromWishList(Book book) {
        int index = -1;
        for (int i = 0; i < size; ++i) {
            if (books[i] == book) {
                index = i;
                break;
            }
        }

        if (index != -1) {
            for (int i = index; i < size - 1; ++i) {
                books[i] = books[i + 1];
            }
            size--;
        }
    }

 inline   void WishList::print() {
        if (size == 0) {
            cout << "Wish list is empty." << endl;
            return;
        }

        for (int i = 0; i < size; ++i) {
            cout << "Item " << i + 1 << ":" << endl;
            books[i].print();
            cout << endl;
        }
    }

inline  List<Book>WishList::getWishList() {
        return books;
    }
#endif