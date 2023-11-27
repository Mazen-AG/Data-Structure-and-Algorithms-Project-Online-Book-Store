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
	void setTitle(string title);
	void setAuthor(string author);
	void setPublisher(string publisher);
	void setISBN(int isbn);
	void setCategory(string category);
	void setPrice(double price);
	void setAvailable(bool available);
	void setQuantity(int quantity);
	void print();
};
