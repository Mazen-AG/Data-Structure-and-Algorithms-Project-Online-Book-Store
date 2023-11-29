#include "User.h"
#include <iostream>

User::User() {
    name = "";
    email = "";
    password = "";
    address = "";
    phoneNumber = "";
}

User::User(string name, string email, string password, string address, string phoneNumber) {
    this->name = name;
    this->email = email;
    this->password = password;
    this->address = address;
    this->phoneNumber = phoneNumber;
}

string User::getName() {
    return name;
}

string User::getEmail() {
    return email;
}

string User::getPassword() {
    return password;
}

string User::getAddress() {
    return address;
}

string User::getPhoneNumber() {
    return phoneNumber;
}

void User::setName(string name) {
    this->name = name;
}

void User::setEmail(string email) {
    this->email = email;
}

void User::setPassword(string password) {
    this->password = password;
}

void User::setAddress(string address) {
    this->address = address;
}

void User::setPhoneNumber(string phoneNumber) {
    this->phoneNumber = phoneNumber;
}

void User::addOrder(OrderTracking order) {
    orders.push_back(order);
}

void User::print() {
    cout << "User Details:" << endl;
    cout << "Name: " << name << endl;
    cout << "Email: " << email << endl;
    cout << "Password: " << password << endl;
    cout << "Address: " << address << endl;
    cout << "Phone Number: " << phoneNumber << endl;

    cout << "Order History:" << endl;
    for (const auto& order : orders) {
        order.print();
        cout << "------------------------" << endl;
    }
}
