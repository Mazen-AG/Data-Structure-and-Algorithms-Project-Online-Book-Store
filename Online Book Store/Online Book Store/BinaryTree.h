#pragma once
#include <iostream>
#include "Book.h"

template <typename T>
class BinNode {
public:
    T data;
    BinNode<T>* left;
    BinNode<T>* right;
    BinNode();
    BinNode(T item);

    BinNode* searchByAuthor(std::string author) const;
};



template <typename T>
class BinaryTree {
public:
    BinNode<T>* root;
    BinaryTree();
    BinNode<T> search(const T& data) const;
    BinNode<Book>* searchBy(std::string factor, std::string factorName) const;
    void insert(const T& data);
    void deleteNode(T data);
    BinNode<T>* findMin(BinNode<T>* node) const;
    // Print function instead of overloading <<
    void print(std::ostream& out);

private:
    void printNode(std::ostream& out, BinNode<T>* node);
};
