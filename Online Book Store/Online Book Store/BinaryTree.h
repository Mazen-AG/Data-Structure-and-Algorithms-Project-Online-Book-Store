
#include <iostream>
using namespace std;
template <typename T>
class BinNode
{
public:
	T data;
	BinNode<T>* left;
	BinNode<T>* right;
	BinNode();
	BinNode(T item);

};
template <typename T>
class BinaryTree
{
public:
	BinNode<T>* root;
	BinaryTree();
	bool search(const T& data) const;
	void insert(const T& data);
	void deleteNode(T data);
	void inOrderTraversal(ostream& out, BinNode<T>* node);
	BinNode<T>* findMin(BinNode<T>* node) const;





};

