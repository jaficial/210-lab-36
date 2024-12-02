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

/* menu_display() displays a dropdown menu of options that the user 
   is able to choose from, that performs actions pertaining to the 
   Binary Search Tree. 
*/
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

/* If "[5] Display Binary Search Tree" is chosen, the user is able
   to select from a dropdown menu, outputted from "tree_display_choice()"
   

*/ 
void tree_display_choice(){
    cout << setw(16) << "" << "Display Choices" << endl;
    cout << "-------------------------------------------" << endl;
    cout << "[1] Display Inorder" << endl;
    cout << "[2] Display Preorder" << endl;
    cout << "[3] Display Postorder" << endl;
}

int main() {

    IntBinaryTree tree;
    ifstream fin("codes.txt");
    string temp_dataset_line;

    int menu_selection = 0;
    int tree_display_selection = 0;
    menu_display();

    while (menu_selection != 6){
        cin >> menu_selection;
        if (menu_selection == 1){
            cin.ignore();
            getline(fin, temp_dataset_line);
            tree.insertNode(temp_dataset_line);
            cout << endl;
            menu_display();
        }
        
        if (menu_selection == 2){
            cin.ignore();
            cout << endl << "Please enter the line of data you would like to delete:" << endl;
            getline(cin, temp_dataset_line);
            bool search_result = tree.searchNode(temp_dataset_line);
            if (search_result == true){
                tree.remove(temp_dataset_line);
                cout << temp_dataset_line << " has been removed from the tree." << endl << endl;
            }
            else {
                cout << temp_dataset_line << " was not found in the tree." << endl << endl;
            }
            menu_display();
        }

        if (menu_selection == 3){
            cin.ignore();
            cout << endl << "Please enter the line of data you would like to search for:" << endl;
            getline(cin, temp_dataset_line);
            bool search_result = tree.searchNode(temp_dataset_line);
            if (search_result == true){
                cout << temp_dataset_line << " is in the BST." << endl << endl;
            }

            else{
                cout << temp_dataset_line << " is not in the BST." << endl << endl;
            }
            menu_display();
        }

        if (menu_selection == 4){
            cin.ignore();
            cout << endl << "Please enter a line of data that you would like to add to the BST:" << endl;
            getline(cin, temp_dataset_line);
            cout << endl;
            tree.insertNode(temp_dataset_line);
            menu_display();
        }

        if (menu_selection == 5){
            cout << endl << "How would you like to display the Binary Search Tree?" << endl;
            tree_display_choice();
            cin >> tree_display_selection;
            if (tree_display_selection == 1){
                cout << endl;
                tree.displayInOrder();
            }

            if (tree_display_selection == 2){
                cout << endl;
                tree.displayPreOrder();
            }

            if (tree_display_selection == 3){
                cout << endl;
                tree.displayPostOrder();
            }

            if ((tree_display_selection < 1) || (tree_display_selection > 3)){
                cout << endl << "Invalid selection. Please enter a valid number from the provided dropdown menu." << endl;
            }
            menu_display();
        }

        if ((menu_selection < 1) || (menu_selection > 6)){
            cout << "Invalid selection. Please enter a valid number from the provided dropdown menu." << endl << endl;
            menu_display();
        }       
    }  

    fin.close();
    return 0;
}