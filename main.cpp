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
    cout << "Done.\n";
    tree.displayPreOrder();
    tree.remove(temp2);
    cout << "After removing test2 node: " << endl;
    tree.displayPreOrder();
    tree.insertNode(temp2);
    cout << "Added test2 back in: " << endl;
    tree.searchNode(temp2);
    

    return 0;
}