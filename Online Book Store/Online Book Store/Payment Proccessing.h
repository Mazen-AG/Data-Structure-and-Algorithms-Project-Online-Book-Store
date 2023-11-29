#pragma once

#include <iostream>
#include "Shopping Cart.h"
#include "User.h"
#include "Order Tracking.h"
class Payment {
private:
	ShoppingList shoppingCart;
	int total;
	string paymentMethod;
    	string generateUniqueOrderID;
	class CreditCard {
		private:
		int CCV;
		int cardNumber;
		string cardName;
		string cardType;
		string cardExpDate;
	public:
		CreditCard();
		CreditCard(int CCV, int cardNumber, string cardName, string cardType, string cardExpDate);
		void setCCV(int CCV);
		void setCardNumber(int cardNumber);
		void setCardName(string cardName);
		void setCardType(string cardType);
		void setCardExpDate(string cardExpDate);
		int getCCV();
		int getCardNumber();
		string getCardName();
		string getCardType();
		string getCardExpDate();
		bool checkCreditCard(CreditCard creditcard);
	};
	class Recepit {
	private:
		string paymentMethod;
		string date;
		string time;
		string email;
		string name;
		string address;
		string bookType; //if the book is an ebook or a physical copy, if ebook then the address is the email
		string totaAmountPaid;
		string VAT;
	public:
		void setPaymentMethod(string paymentMethod);
		void setDate(string date);
		void setTime(string time);
		void setEmail(string email);
		void setName(string name);
		void setAddress(string address);
		void setBookType(string bookType);
		void setTotalAmountPaid(string totalAmountPaid);
		void setVAT(string VAT);
		string getPaymentMethod();
		string getDate();
		string getTime();
		string getEmail();
		string getName();
		string getAddress();
		string getBookType();
		string getTotalAmountPaid();
		string getVAT();

	};

	public:
		Payment();
		void calculateTotal();
		void chosenPaymentMethod();
		void creditCardPayment(CreditCard creditCard);
		void payPalPayment(string PayPalemail,string PayPalpassword);
		void print();
		void pay();
		void confirmPayment(); //don't forget to call makeReceipt(), printReceipt() and add the order to order tracking
		void cancelPayment();
		void makeReceipt();
		void printReceipt(Recepit recepit);

};
