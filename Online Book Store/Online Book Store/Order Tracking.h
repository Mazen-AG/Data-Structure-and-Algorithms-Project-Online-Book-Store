#pragma once

#include <string>
using namespace std;

class OrderTracking {
private:
	string orderID;
	string orderDate;
	string orderStatus;
	string orderType;
	string orderAddress;
	string orderPayment;
public:
	OrderTracking();
	OrderTracking(string orderID, string orderDate, string orderStatus, string orderType, string orderAddress, string orderPayment);
	string getOrderID();
	string getOrderDate();
	string getOrderStatus();
	string getOrderType();
	string getOrderAddress();
	string getOrderPayment();
	void setOrderID(string orderID);
	void setOrderDate(string orderDate);
	void setOrderStatus(string orderStatus);
	void setOrderType(string orderType);
	void setOrderAddress(string orderAddress);
	void setOrderPayment(string orderPayment);
	void print();
};