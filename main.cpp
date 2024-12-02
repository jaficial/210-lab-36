// COMSC-210 | Jed Aficial | Lab 36
// github link: https://github.com/jaficial/210-lab-36

#include <iostream>
#include <string>
#include "IntBinaryTree.h"
#include <iomanip>
using namespace std;

void menu_display();

void menu_display(){
    cout << setw(12) << "" << "Records BST" << endl;
    cout << "[1] Add a Node" << endl;
    cout << "[2] Delete a Node" << endl;
    cout << "[3] Search for a Node" << endl;
    cout << "[4] Modify Records" << endl;
}
int main() {
    // header and IntBinaryTree.cpp files now accept strings as values for the nodes 
    // NEED TO DO: then write driver file in main to populate a BST with dataset file 
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
    menu_display();

    

    return 0;
}