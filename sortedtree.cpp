#include <iostream>
#include <string>
#include <memory>
#include <cstdlib>
#include <ctime>
#include <vector>
#include "BinarySearchTree.h"


std::vector<int> theTreeSorted;

void display(int& anItem)
{
	std::cout << anItem << " ";
	theTreeSorted.push_back(anItem);
}

int main() {
	
	srand((unsigned)time(0));
	
	BinarySearchTree<int> theTree;
	
	int num = 0;
	std::cout <<"Generate random numbers:\n\n";
	for (int i = 0; i < 22; i++)
	{
		num = rand() % 100 + 1;
		std::cout << num << " ";
		theTree.add(num);
	}
	
	
	std::cout << "\n\nAdded the numbers to the tree.\n";

	theTree.remove(num);

	std::cout << "\nRemoved " << num << " from the tree.\n";
	
	std::cout << "\nThe Binary Search Tree contains: \n" << std::endl;

	theTree.inorderTraverse(display);

	return 0;
}
