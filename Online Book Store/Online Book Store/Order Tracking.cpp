#include "OrderTracking.h"
#include <iostream>

OrderTracking::OrderTracking() {
    // Default constructor
    orderID = "";
    orderDate = "";
    orderStatus = "";
    orderType = "";
    orderAddress = "";
    orderPayment = "";
}

OrderTracking::OrderTracking(string orderID, string orderDate, string orderStatus, string orderType, string orderAddress, string orderPayment) {
    // Parameterized constructor
    this->orderID = orderID;
    this->orderDate = orderDate;
    this->orderStatus = orderStatus;
    this->orderType = orderType;
    this->orderAddress = orderAddress;
    this->orderPayment = orderPayment;
}

string OrderTracking::getOrderID() {
    return orderID;
}

string OrderTracking::getOrderDate() {
    return orderDate;
}

string OrderTracking::getOrderStatus() {
    return orderStatus;
}

string OrderTracking::getOrderType() {
    return orderType;
}

string OrderTracking::getOrderAddress() {
    return orderAddress;
}

string OrderTracking::getOrderPayment() {
    return orderPayment;
}

void OrderTracking::setOrderID(string orderID) {
    this->orderID = orderID;
}

void OrderTracking::setOrderDate(string orderDate) {
    this->orderDate = orderDate;
}

void OrderTracking::setOrderStatus(string orderStatus) {
    this->orderStatus = orderStatus;
}

void OrderTracking::setOrderType(string orderType) {
    this->orderType = orderType;
}

void OrderTracking::setOrderAddress(string orderAddress) {
    this->orderAddress = orderAddress;
}

void OrderTracking::setOrderPayment(string orderPayment) {
    this->orderPayment = orderPayment;
}

void OrderTracking::print() {
    cout << "Order ID: " << orderID << endl;
    cout << "Order Date: " << orderDate << endl;
    cout << "Order Status: " << orderStatus << endl;
    cout << "Order Type: " << orderType << endl;
    cout << "Order Address: " << orderAddress << endl;
    cout << "Order Payment: " << orderPayment << endl;
}
