#pragma once

#include <iostream>
#include "DynamicArray.h"
#include "OrderTracking.h"
using namespace std;

class User {
	private:
	string name;
	string email;
	string password;
	string address;
	string phoneNumber;
	List<Order> orders;
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
	void addOrder(Order order);
	void print();
};