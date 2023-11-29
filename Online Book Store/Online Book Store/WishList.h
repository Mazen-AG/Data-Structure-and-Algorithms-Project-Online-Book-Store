#ifndef gg
#define gg


#include <iostream>
#include "Book.h"
#include "DynamicArray.h"

class WishList {
private:
    List<Book> books;
    int size;

public:
    WishList();
    WishList(int initialCapacity);
    void addBookToWishList(Book book);
    void removeBookFromWishList(Book book);
    void print();
    List<Book> getWishList();
};
#endif // gg