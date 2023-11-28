#pragma once
using namespace std;
#include <string>


class Book {
private:
	string title;
	string author;
	string publisher;
	string isbn;
	string category;
	double price;
	bool available;
	int quantity;
	string bookType; //if the book is an ebook or a physical copy, if ebook then the address is the email
public:
	Book();
	Book(string title, string author, string publisher, string isbn, string category, double price, bool available, int quantity, string booktype);
	string getTitle();
	string getAuthor();
	string getPublisher();
	string getISBN();
	string getCategory();
	double getPrice();
	bool getAvailable();
	int getQuantity();
	string getBookType();
	void setTitle(string title);
	void setAuthor(string author);
	void setPublisher(string publisher);
	void setISBN(string isbn);
	void setCategory(string category);
	void setPrice(double price);
	void setAvailable(bool available);
	void setQuantity(int quantity);
	void setBookType(string bookType);
	void print();
	long long getValueOfBook();

	bool operator==(const Book& book);
	void operator=(const Book& book);
	bool operator>(Book& book);
	bool operator<(Book& book);


};

