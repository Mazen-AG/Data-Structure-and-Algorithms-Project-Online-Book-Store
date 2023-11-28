#include <iostream>
#include "Catalog.h"
#include "Book.h"
#include "Dynamic Array.h"

class WishList {
private:
    List<Book> books;
    int size;

public:
    WishList() : size(0) {}

    void addBookToWishList(Book book) {
        books.insert(book, size);
        size++;
    }

    void removeBookFromWishList(Book book) {
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

    void print() {
        if (size == 0) {
            std::cout << "Wish list is empty." << std::endl;
            return;
        }

        for (int i = 0; i < size; ++i) {
            std::cout << "Item " << i + 1 << ":" << std::endl;
            books[i].print(); // Assuming Book class has a print() function to display book details
            std::cout << std::endl;
        }
    }

    List<Book> getWishList() {
        return books;
    }
};
