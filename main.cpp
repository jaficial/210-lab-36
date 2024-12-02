// COMSC-210 | Jed Aficial | Lab 36
// github link: https://github.com/jaficial/210-lab-36

#include <iostream>
#include <fstream>
#include <string>
#include "IntBinaryTree.h"
#include <iomanip>
using namespace std;

void menu_display();

void menu_display(){
    cout << setw(16) << "" << "Records BST" << endl;
    cout << "-------------------------------------------" << endl;
    cout << "[1] Add a Node" << endl;
    cout << "[2] Delete a Node" << endl;
    cout << "[3] Search for a Node" << endl;
    cout << "[4] Modify Records" << endl;
    cout << "[5] Finish BST"
}

int main() {
    // header and IntBinaryTree.cpp files now accept strings as values for the nodes 
    // NEED TO DO: then write driver file in main to populate a BST with dataset file 
    // add interactive menu-driven functionality to add, delete, search, and modify records
    IntBinaryTree tree;
    ifstream fin("codes.txt");
    menu_display();
    int menu_selection = 0;

    while (menu_selection != 5){
        menu_display();
        if (menu_selection == 1){

        }
        
        if (menu_selection == 2){

        }

        if (menu_selection == 3){

        }

        if (menu_selection == 4){

        }
        
    }


    return 0;
}