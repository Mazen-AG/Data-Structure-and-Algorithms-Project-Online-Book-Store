#include <iostream>
#include "BinaryTree.h"
using namespace std;
int main()
{
	BinaryTree<int> test;
	test.insert(1);
	test.insert(5);
	test.insert(8);
	test.insert(3);
	test.insert(9);
	ostream& out = cout;
	test.inOrderTraversal(out, test.root);

	//	cout << test;
	return 0;

}