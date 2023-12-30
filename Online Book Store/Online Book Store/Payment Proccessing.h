#pragma once

#include <iostream>
#include "ShoppingCart.h"
#include "User.h"
#include "OrderTracking.h"
class CreditCard {
private:
    int CCV;
    int cardNumber;
    std::string cardName;
    std::string cardType;
    std::string cardExpDate;

public:
    CreditCard();
    CreditCard(int CCV, int cardNumber, std::string cardName, std::string cardType, std::string cardExpDate);

    void setCCV(int CCV);
    void setCardNumber(int cardNumber);
    void setCardName(std::string cardName);
    void setCardType(std::string cardType);
    void setCardExpDate(std::string cardExpDate);

    int getCCV() const;
    int getCardNumber() const;
    std::string getCardName() const;
    std::string getCardType() const;
    std::string getCardExpDate() const;
};

class Receipt {
private:
    std::string paymentMethod;
    std::string date;
    std::string time;
    std::string email;
    std::string name;
    std::string address;
    std::string bookType; // if the book is an ebook or a physical copy, if ebook then the address is the email
    std::string totalAmountPaid;
    std::string VAT;

public:
    void setPaymentMethod(std::string paymentMethod);
    void setDate(std::string date);
    void setTime(std::string time);
    void setEmail(std::string email);
    void setName(std::string name);
    void setAddress(std::string address);
    void setBookType(std::string bookType);
    void setTotalAmountPaid(std::string totalAmountPaid);
    void setVAT(std::string VAT);

    std::string getPaymentMethod() const;
    std::string getDate() const;
    std::string getTime() const;
    std::string getEmail() const;
    std::string getName() const;
    std::string getAddress() const;
    std::string getBookType() const;
    std::string getTotalAmountPaid() const;
    std::string getVAT() const;
};
class Payment {
private:
    ShoppingList shoppingCart;
    int total;
    std::string paymentMethod;
    std::string generateUniqueOrderID;

public:
    Payment();
    void calculateTotal();
    void chosenPaymentMethod();
    void creditCardPayment(const CreditCard& creditCard);
    void payPalPayment(std::string PayPalEmail, std::string PayPalPassword);
    void print() const;
    void pay();
    void confirmPayment(); // don't forget to call makeReceipt(), printReceipt() and add the order to order tracking
    void cancelPayment();
    void makeReceipt();
    void printReceipt(const Receipt& receipt);
};
