#pragma once

#include <iostream>

using namespace std;

class User {
	private:
	string name;
	string email;
	string password;
	string address;
	string phoneNumber;
public:
	User();
	User(string name, string email, string password, string address, string phoneNumber);
	string getName();
	string getEmail();
	string getPassword();
	string getAddress();
	string getPhoneNumber();
	void setName(string name);
	void setEmail(string email);
	void setPassword(string password);
	void setAddress(string address);
	void setPhoneNumber(string phoneNumber);
	void print();
};