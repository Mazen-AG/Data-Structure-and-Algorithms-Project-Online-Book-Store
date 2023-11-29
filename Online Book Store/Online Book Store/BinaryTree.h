#pragma once
#include <iostream>

template <typename T>
class BinNode {
public:
    T data;
    BinNode<T>* left;
    BinNode<T>* right;
    BinNode();
    BinNode(T item);
};

template <typename T>
class BinaryTree {
public:
    BinNode<T>* root;
    BinaryTree();
    bool search(const T& data) const;
    void insert(const T& data);
    void deleteNode(T data);
    BinNode<T>* findMin(BinNode<T>* node) const;
    T getNode(const T& datatosearch, BinNode<T>* node);
    // Print function instead of overloading <<
    void print(std::ostream& out);

private:
    void printNode(std::ostream& out, BinNode<T>* node);
};
