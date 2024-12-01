#include <iostream>
#include <string>
#include "IntBinaryTree.h"
using namespace std;

int main() {
    // NEED TO DO: Modify header and IntBinaryTree.cpp files to process strings instead of integers
    // then write driver file in main to populate a BST with dataset file 
    // add interactive menu-driven functionality to add, delete, search, and modify records
    IntBinaryTree tree;

    cout << "Inserting nodes. ";
    string temp = "test1";
    string temp2 = "test2";
    tree.insertNode(temp);
    tree.insertNode(temp2);
    // tree.insertNode(3);
    // tree.insertNode(12);
    // tree.insertNode(9);
    
    cout << "Done.\n";
    tree.displayPreOrder();

    return 0;
}