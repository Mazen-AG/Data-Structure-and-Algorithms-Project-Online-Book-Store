#include "Payment Processing.h"
#include <string>
#include <vector>
#include <chrono>
#include <ctime>
#include <random>

Payment::CreditCard::CreditCard() {
}

Payment::CreditCard::CreditCard(int CCV, int cardNumber, string cardName, string cardType, string cardExpDate)
    : CCV(CCV), cardNumber(cardNumber), cardName(cardName), cardType(cardType), cardExpDate(cardExpDate) {
    // Parameterized constructor implementation
}

void Payment::CreditCard::setCCV(int CCV) {
    this->CCV = CCV;
}

void Payment::CreditCard::setCardNumber(int cardNumber) {
    this->cardNumber = cardNumber;
}

void Payment::CreditCard::setCardName(string cardName) {
    this->cardName = cardName;
}

void Payment::CreditCard::setCardType(string cardType) {
    this->cardType = cardType;
}

void Payment::CreditCard::setCardExpDate(string cardExpDate) {
    this->cardExpDate = cardExpDate;
}

int Payment::CreditCard::getCCV() {
    return CCV;
}

int Payment::CreditCard::getCardNumber() {
    return cardNumber;
}

string Payment::CreditCard::getCardName() {
    return cardName;
}

string Payment::CreditCard::getCardType() {
    return cardType;
}

string Payment::CreditCard::getCardExpDate() {
    return cardExpDate;
}

bool Payment::CreditCard::checkCreditCard(CreditCard creditcard) {

    std::string input = creditcard.getCardName();

    //convert input into an integer
    std::vector<int> creditCardInt;
    for (int i = 0; i < input.length(); i++)
    {
        //char to int
        creditCardInt.push_back(input[i] - '0');
    }

    // loop through credit card number backwards
    for (int i = input.length() - 2; i >= 0; i = i - 2) {
        //check every digit
        int tempValue = creditCardInt[i];
        tempValue = tempValue * 2;
        if (tempValue > 9) {
            tempValue = tempValue % 10 + 1;
        }
        creditCardInt[i] = tempValue;
    }

    int total = 0;

    //add all digits
    for (int i = 0; i < creditCardInt.size(); i++) {
        total += creditCardInt[i];
    }

    //check
    if (total % 10 == 0) {
        return true;
    }

    else
        return false;

}

void Payment::Recepit::setPaymentMethod(string paymentMethod) {
    this->paymentMethod = paymentMethod;
}

void Payment::Recepit::setDate(string date) {
    this->date = date;
}

void Payment::Recepit::setTime(string time) {
    this->time = time;
}

void Payment::Recepit::setEmail(string email) {
    this->email = email;
}

void Payment::Recepit::setName(string name) {
    this->name = name;
}

void Payment::Recepit::setAddress(string address) {
    this->address = address;
}

void Payment::Recepit::setBookType(string bookType) {
    this->bookType = bookType;
}

void Payment::Recepit::setTotalAmountPaid(string totalAmountPaid) {
    this->totaAmountPaid = totalAmountPaid;
}

void Payment::Recepit::setVAT(string VAT) {
    this->VAT = VAT;
}

string Payment::Recepit::getPaymentMethod() {
    return paymentMethod;
}

string Payment::Recepit::getDate() {
    return date;
}

string Payment::Recepit::getTime() {
    return time;
}

string Payment::Recepit::getEmail() {
    return email;
}

string Payment::Recepit::getName() {
    return name;
}

string Payment::Recepit::getAddress() {
    return address;
}

string Payment::Recepit::getBookType() {
    return bookType;
}

string Payment::Recepit::getTotalAmountPaid() {
    return totaAmountPaid;
}

string Payment::Recepit::getVAT() {
    return VAT;
}

std::string Payment::generateUniqueOrderID() {
    // Generate a unique order ID using a random number
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dis(100000, 999999);
    int randomComponent = dis(gen);

    return std::to_string(randomComponent);
}

Payment::Payment() {
    total = 0;
    paymentMethod = "";
}

void Payment::calculateTotal() {
    // Get the list of books from the shopping cart
    List<Book> bookList = shoppingCart.getShoppingList();

    // Calculate the total book prices
    total = 0;
    for (const Book& book : bookList) {
        total += book.getPrice();
    }
}

void Payment::paymentMethod() {
    // Ask the user to choose a payment method
    std::cout << "Choose a payment method:" << std::endl;
    std::cout << "1. Credit Card" << std::endl;
    std::cout << "2. PayPal" << std::endl;

    int choice;
    std::cin >> choice;

    switch (choice) {
    case 1:
        paymentMethod = "Credit Card";
        break;
    case 2:
        paymentMethod = "PayPal";
        break;
    default:
        std::cerr << "Invalid choice. Please try again." << std::endl;
        paymentMethod();
    }
}

void Payment::creditCardPayment(CreditCard creditCard) {
    
    std::cout << "Credit Card payment successful!" << std::endl;

}

void Payment::payPalPayment() {
    string payPalEmail;
    string payPalPassword;

    cout << "Enter your PayPal email: ";
    cin >> payPalEmail;

    cout << "Enter your PayPal password: ";
    cin >> payPalPassword;

    cout << "PayPal payment successful!";
}

void Payment::print() {
    std::cout << "Total: " << total << std::endl;
    std::cout << "Payment Method: " << paymentMethod << std::endl;
}

void Payment::pay() {
    calculateTotal();
    paymentMethod();

    // Check if the payment method and process work
    if (paymentMethod == "CreditCard") {
        CreditCard creditCard;
        creditCardPayment(creditCard);
    }
    else{
        payPalPayment();
    }
    
}

void Payment::confirmPayment() {

    makeReceipt();

    OrderTracking orderTracking;
    orderTracking.setOrderID(generateUniqueOrderID());
    orderTracking.setOrderStatus("Completed");
    orderTracking.setOrderType("Online");


    if (orderTracking.getBookType() == "ebook") {
        // For an ebook, the email address is the address
        orderTracking.setOrderAddress(user.getEmail());
    }
    else {
        orderTracking.setOrderAddress(user.getAddress());
    }

    orderTracking.setOrderPayment(getPaymentMethod());


    // Print the receipt
    printReceipt(receipt);
}

void Payment::cancelPayment() {
    std::cout << "Payment canceled." << std::endl;
}

void Payment::makeReceipt() {

    Recepit receipt;
    
    receipt.setPaymentMethod(getPaymentMethod());

    // Get the current date and time
    auto now = std::chrono::system_clock::now();
    std::time_t now_c = std::chrono::system_clock::to_time_t(now);

    // Convert the current time to a string
    char buffer[80];
    std::strftime(buffer, sizeof(buffer), "%Y-%m-%d %H:%M:%S", std::localtime(&now_c));

    receipt.setDate(buffer);

    receipt.setTime();


    receipt.setEmail();
    receipt.setName();
    receipt.setAddress();
    receipt.setBookType();
    receipt.setTotalAmountPaid();
    receipt.setVAT();

    // Set the order tracking details
    
    user.addOrder(orderTracking);
}

void Payment::printReceipt(Recepit receipt) {
    std::cout << "Receipt Details:" << std::endl;
    std::cout << "-------------------------" << std::endl;
    std::cout << "Payment Method: " << receipt.getPaymentMethod() << std::endl;
    std::cout << "Date: " << receipt.getDate() << std::endl;
    std::cout << "Time: " << receipt.getTime() << std::endl;
    std::cout << "Email: " << receipt.getEmail() << std::endl;
    std::cout << "Name: " << receipt.getName() << std::endl;
    std::cout << "Address: " << receipt.getAddress() << std::endl;
    std::cout << "Book Type: " << receipt.getBookType() << std::endl;
    std::cout << "Total Amount Paid: " << receipt.getTotalAmountPaid() << std::endl;
    std::cout << "VAT: " << receipt.getVAT() << std::endl;
    std::cout << "-------------------------" << std::endl;
}
