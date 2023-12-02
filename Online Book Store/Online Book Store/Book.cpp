#include "Book.h"
#include <iostream>
#include <string>

using namespace std;

inline Book::Book() {
	title = "";
	author = "";
	publisher = "";
	isbn = "";
	category = "";
	price = 0.0;
	available = false;
	quantity = 0;
	bookType = "";
}
 inline Book::Book(string title, string author, string publisher, string isbn, string category, double price, bool available, int quantity, string booktype) {
	this->title = title;
	this->author = author;
	this->publisher = publisher;
	this->isbn = isbn;
	this->category = category;
	this->price = price;
	this->available = available;
	this->quantity = quantity;
	this->bookType = booktype;
}
inline string Book::getTitle() {
	return title;
}
inline string Book::getAuthor() {
	return author;
}
inline string Book::getPublisher() {
	return publisher;
}
inline string Book::getISBN() {
	return isbn;
}
inline string Book::getCategory() {
	return category;
}
inline double Book::getPrice() {
	return price;
}
inline bool Book::getAvailable() {
	return available;
}
inline int Book::getQuantity() {
	return quantity;
}
inline string Book::getBookType() {
	return bookType;
}
inline void Book::setTitle(string title) {
	this->title = title;
}
inline void Book::setAuthor(string author) {
	this->author = author;
}
inline void Book::setPublisher(string publisher) {
	this->publisher = publisher;
}
inline void Book::setISBN(string isbn) {
	this->isbn = isbn;
}
inline void Book::setCategory(string category) {
	this->category = category;
}
inline void Book::setPrice(double price) {
	this->price = price;
}
inline void Book::setAvailable(bool available) {
	this->available = available;
}
inline void Book::setQuantity(int quantity) {
	this->quantity = quantity;
}
inline void Book::setBookType(string bookType) {
	this->bookType = bookType;
}
inline void Book::print() {
	cout << "Title: " << title << endl;
	cout << "Author: " << author << endl;
	cout << "Publisher: " << publisher << endl;
	cout << "ISBN: " << isbn << endl;
	cout << "Category: " << category << endl;
	cout << "Price: " << price << endl;
	cout << "Available: " << available << endl;
	cout << "Quantity: " << quantity << endl;
	cout << "Book Type: " << bookType << endl;
}

inline string Book::getValueOfBook() {
	return getISBN();
}

inline bool Book::operator==(const Book& book) const {
	if (title == book.title && author == book.author && publisher == book.publisher && isbn == book.isbn && category == book.category && price == book.price && available == book.available && quantity == book.quantity && bookType == book.bookType) {
		return true;
	}
	else {
		return false;
	}
}
inline void Book::operator=(const Book& book) {
	title = book.title;
	author = book.author;
	publisher = book.publisher;
	isbn = book.isbn;
	category = book.category;
	price = book.price;
	available = book.available;
	quantity = book.quantity;
	bookType = book.bookType;

}

inline bool Book::operator>(Book& book) {
	if (this->getValueOfBook() > book.getValueOfBook()) {
		return true;
	}
	else {
		return false;
	}

}
inline bool Book::operator<(Book& book) {
	if (this->getValueOfBook() < book.getValueOfBook()) {
		return true;
	}
	else {
		return false;
	}

}

inline ostream& operator<<(ostream& out, Book book) {
	out << "Title: " << book.title << endl;
	out << "Author: " << book.author << endl;
	out << "Publisher: " << book.publisher << endl;
	out << "ISBN: " << book.isbn << endl;
	out << "Category: " << book.category << endl;
	out << "Price: " << book.price << endl;
	out << "Available: " << book.available << endl;
	out << "Quantity: " << book.quantity << endl;
	out << "Book Type: " << book.bookType << endl;
	return out;
}