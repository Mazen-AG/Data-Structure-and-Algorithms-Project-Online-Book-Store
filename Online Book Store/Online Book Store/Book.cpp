#include "Book.h"
#include <iostream>
#include <string>

using namespace std;

Book::Book() {
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
Book::Book(string title, string author, string publisher, string isbn, string category, double price, bool available, int quantity, string booktype) {
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
string Book::getTitle() {
	return title;
}
string Book::getAuthor() {
	return author;
}
string Book::getPublisher() {
	return publisher;
}
string Book::getISBN() {
	return isbn;
}
string Book::getCategory() {
	return category;
}
double Book::getPrice() {
	return price;
}
bool Book::getAvailable() {
	return available;
}
int Book::getQuantity() {
	return quantity;
}
string Book::getBookType() {
	return bookType;
}
void Book::setTitle(string title) {
	this->title = title;
}
void Book::setAuthor(string author) {
	this->author = author;
}
void Book::setPublisher(string publisher) {
	this->publisher = publisher;
}
void Book::setISBN(string isbn) {
	this->isbn = isbn;
}
void Book::setCategory(string category) {
	this->category = category;
}
void Book::setPrice(double price) {
	this->price = price;
}
void Book::setAvailable(bool available) {
	this->available = available;
}
void Book::setQuantity(int quantity) {
	this->quantity = quantity;
}
void Book::setBookType(string bookType) {
	this->bookType = bookType;
}
void Book::print() {
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

long long Book::getValueOfBook() {
	long long sum = 0;
	for (char c : author) {
		sum += int(c);
	}
	for (char c : title) {
		sum += int(c);
	}
	for (char c : publisher) {
		sum += int(c);
	}
	for (char c : isbn) {
		if (isdigit(c)) {
			int digit = c - '0';
			sum = sum * 10 + digit;
		}
	}
	for (char c : category) {
		sum += int(c);
	}
	return sum;
}

bool Book::operator==(const Book& book) {
	if (title == book.title && author == book.author && publisher == book.publisher && isbn == book.isbn && category == book.category && price == book.price && available == book.available && quantity == book.quantity && bookType == book.bookType) {
		return true;
	}
	else {
		return false;
	}
}
void Book::operator=(const Book& book) {
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

bool Book::operator>(Book& book) {
	if (this->getValueOfBook() > book.getValueOfBook()) {
		return true;
	}
	else {
		return false;
	}

}
bool Book::operator<(Book& book) {
	if (this->getValueOfBook() < book.getValueOfBook()) {
		return true;
	}
	else {
		return false;
	}

}