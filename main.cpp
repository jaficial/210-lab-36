// COMSC-210 | Jed Aficial | Lab 36
// github link: https://github.com/jaficial/210-lab-36

#include <iostream>
#include <fstream>
#include <string>
#include "IntBinaryTree.h"
#include <iomanip>
using namespace std;

void menu_display();
void tree_display_choice();

void menu_display(){
    cout << setw(16) << "" << "Records BST" << endl;
    cout << "-------------------------------------------" << endl;
    cout << "[1] Add a Node" << endl;
    cout << "[2] Delete a Node" << endl;
    cout << "[3] Search for a Node" << endl;
    cout << "[4] Modify Records" << endl;
    cout << "[5] Display Binary Search Tree" << endl;
    cout << "[6] Finish BST" << endl;
}

void tree_display_choice(){
    cout << setw(16) << "" << "Display Choices" << endl;
    cout << "-------------------------------------------" << endl;
    cout << "[1] Display Inorder" << endl;
    cout << "[2] Display Preorder" << endl;
    cout << "[3] Display Postorder" << endl;
}

int main() {
    // header and IntBinaryTree.cpp files now accept strings as values for the nodes 
    // NEED TO DO: then write driver file in main to populate a BST with dataset file 
    // add interactive menu-driven functionality to add, delete, search, and modify records
    IntBinaryTree tree;
    ifstream fin("codes.txt");
    string temp_dataset_line;

    int menu_selection = 0;
    int tree_display_selection = 0;

    while (menu_selection != 6){
        cin >> menu_selection;
        menu_display();
        if (menu_selection == 1){
            cin.ignore();
            getline(fin, temp_dataset_line);
            tree.insertNode(temp_dataset_line);
        }
        
        if (menu_selection == 2){
            cin.ignore();
            getline(cin, temp_dataset_line);
            tree.remove(temp_dataset_line);
        }

        if (menu_selection == 3){
            cin.ignore();
            getline(cin, temp_dataset_line);
            tree.searchNode(temp_dataset_line);
        }

        if (menu_selection == 4){
            
        }

        if (menu_selection == 5){
            cout << "How would you like to display the Binary Search Tree?" << endl;
            tree_display_choice();
            cin >> tree_display_selection;
            if (tree_display_selection == 1){
                tree.displayInOrder();
            }

            if (tree_display_selection == 2){
                tree.displayPreOrder();
            }

            if (tree_display_selection == 3){
                tree.displayPostOrder();
            }

            if ((tree_display_selection < 1) || (tree_display_selection > 3)){
                cout << "Invalid selection. Please enter a valid number from the provided dropdown menu." << endl;
            }
        }

        if ((menu_selection < 1) || (menu_selection > 6)){
            cout << "Invalid selection. Please enter a valid number from the provided dropdown menu." << endl;
        }
    }  

    tree.displayInOrder();
    tree.displayPostOrder();
    tree.displayPreOrder();

    fin.close();
    return 0;
}