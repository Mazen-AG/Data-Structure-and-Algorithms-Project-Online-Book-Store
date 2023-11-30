#pragma once
#include <iostream>
#include "Book.h"



template <typename T>
class BinNode {
public:
    T data;
    long long key;
    BinNode<T>* left;
    BinNode<T>* right;
    BinNode();
    BinNode(long long key);
    BinNode(long long key, T item);


    friend ostream& operator<<(ostream& out, const BinNode<T>& node);
    BinNode<T>* operator=(const BinNode<T>* other);
    BinNode<T>& operator=(const BinNode<T>& other);
    bool operator!() const;


};

template <typename T>
ostream& operator<<(ostream& out, BinNode<T>* node);

template <typename T>
class BinaryTree {
public:
    BinNode<T>* root;
    BinaryTree();


    void insert(long long key, T& data);
    void deleteNode(long long key);
    BinNode<T>* findMin(BinNode<T>* node) const;
    BinNode<T>* findMax(BinNode<T>* node) const;


    void print(std::ostream& out);

    BinNode<T>* search(const long long key) const;
    BinNode<T>* searchBy(const string& factor, const string& factorName) const;
    BinNode<T>* searchByAuthor(BinNode<T>* node, const string& factorName) const;
    BinNode<T>* searchByTitle(BinNode<T>* node, const string& factorName) const;
    BinNode<T>* searchByPublisher(BinNode<T>* node, const string& factorName) const;
    BinNode<T>* searchByCategory(BinNode<T>* node, const string& factorName) const;
    BinNode<T>* searchByAvailability(BinNode<T>* node, const bool& factorName) const;
    BinNode<T>* searchByBookType(BinNode<T>* node, const string& factorName) const;



private:
    void printNode(std::ostream& out, BinNode<T>* node);
};



/*
BinNode<Book>* searchBy(std::string factor, std::string factorName) const;
    BinNode<T>* searchByAuthor(const std::string& author, BinNode<T>* node) const;
        // BinNode<T> searchByPrice(BinNode<T>* node, const string& factorName) const;
    // BinNode<T> searchByQuantity(BinNode<T>* node, const string& factorName) const;
*/