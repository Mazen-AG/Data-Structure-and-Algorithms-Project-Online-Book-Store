#pragma once

#include <iostream>
#include "Dynamic Array.h"
#include "Order Tracking.h"
using namespace std;

class User {
	private:
	string name;
	string email;
	string password;
	string address;
	string phoneNumber;
	List<OrderTracking> orders;
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
	void addOrder(OrderTracking order);
	void print();
};