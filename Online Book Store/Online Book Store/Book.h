#pragma once

using namespace std;
#include <string>


class Book {
	private:
	string title;
	string author;
	string publisher;
	int isbn;
	string category;
	double price;
	bool available;
	int quantity;
	string bookType; //if the book is an ebook or a physical copy, if ebook then the address is the email
public:
	class Author {
	private:
		string authorName;
		int authorID;
	};
	Book();
	Book(string title, Author author, string publisher, int isbn, string category, double price);
	string getTitle();
	string getAuthor();
	string getPublisher();
	int getISBN();
	string getCategory();
	double getPrice();
	bool getAvailable();
	int getQuantity();
	string getBookType();
	void setTitle(string title);
	void setAuthor(string author);
	void setPublisher(string publisher);
	void setISBN(int isbn);
	void setCategory(string category);
	void setPrice(double price);
	void setAvailable(bool available);
	void setQuantity(int quantity);
	void setBookType(string bookType);
	void print();
};
