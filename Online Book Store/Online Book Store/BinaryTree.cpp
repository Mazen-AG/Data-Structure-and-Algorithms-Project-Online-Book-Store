
#include <iostream>
#include "BinaryTree.h"
using namespace std;


template <typename T>
BinNode<T>::BinNode() {
	this->data = 0;
	this->left = nullptr;
	this->right = nullptr;
}

template <typename T>
BinNode<T>::BinNode(T item) {
	this->data = item;
	this->left = nullptr;
	this->right = nullptr;
}
template <typename T>
BinaryTree<T>::BinaryTree() {
	this->root = nullptr;
}
template <typename T>
BinNode<T>* BinaryTree<T>::findMin(BinNode<T>* node) const
{
	while (node->left)
	{
		node = node->left;
	}
	return node;
}

template <typename T>
bool BinaryTree<T>::search(const T& data) const
{

	BinNode<T>* current = root;
	while (current)
	{
		if (data < current->data)
		{
			current = current->left;
		}
		else if (data > current->data)
		{
			current = current->right;
		}
		else
		{

			return true;
		}

	}

	return false;
}



template <typename T>
void BinaryTree<T>::insert(const T& data)
{

	BinNode<T>* newNode = new BinNode<T>(data);
	std::cout << "Inserting node with data: " << data << std::endl;
	if (!root)
	{
		root = newNode;
		return;
	}

	BinNode<T>* current = root;
	while (true)
	{
		if (data < current->data)
		{
			if (current->left == nullptr)
			{
				current->left = newNode;
				break;
			}
			current = current->left;
		}
		else
		{
			if (current->right == nullptr)
			{
				current->right = newNode;
				break;
			}
			current = current->right;
		}

	}
}
template <typename T>
void BinaryTree<T>::deleteNode(T data)
{
	BinNode<T>* current = root;
	BinNode<T>* parent = nullptr;
	while (current && current->data != data)
	{
		parent = current;
		if (data < current->data)
		{
			current = current->left;
		}
		else if (data > current->data)
		{
			current = current->right;
		}
	}

	if (!current)
	{
		return;
	}

	//CASE: Parent Node has no children
	if (!current->left && !current->right)
	{
		if (!parent)
		{
			root = nullptr;

		}
		else if (parent->left == current)
		{
			parent->left = nullptr;
		}
		else
		{
			parent->right = nullptr;
		}
		delete current;
		return;
	}
	//CASE: Parent Node has one child.
	//SUBCASE: RIGHT CHILD
	if (!current->left)
	{
		BinNode<T>* child = current->right;
		if (!parent)
		{
			root = child;
		}
		else if (parent->left == current)
		{
			parent->left = child;
		}
		else
		{
			parent->right = child;
		}
		delete current;
		return;
	}
	//SUBCASE: LEFT CHILD
	else
	{
		BinNode<T>* child = current->left;
		if (!parent)
		{
			root = child;
		}
		else if (parent->left == current)
		{
			parent->left = child;
		}
		else
		{
			parent->right = child;
		}

	}
	delete current;
	return;


	//CASE: PARENT NODE HAS TWO CHILDREN

	if (current->right && current->left)
	{
		BinNode<T>* successor = findMin(current->right);
		deleteNode(successor->data);
		current->data = successor->data;
	}

}
template <typename T>
void BinaryTree<T>::print(std::ostream& out) {
	printNode(out, root);
}

template <typename T> //Inorder traversel of the tree
void BinaryTree<T>::printNode(std::ostream& out, BinNode<T>* node) {
	if (node) {
		printNode(out, node->left);
		out << node->data << " ";
		printNode(out, node->right);
	}
}