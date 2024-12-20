// COMSC-210 | Jed Aficial | Lab 36
// github link: https://github.com/jaficial/210-lab-36
// Specification file for the IntBinaryTree class
#ifndef INTBINARYTREE_H
#define INTBINARYTREE_H
#include <string>
using namespace std;

/* NOTE: As mentioned in the "IntBinaryTree.cpp" file, all instances of the int type has been
         replaced with the string type, and/or the two files have been editted to accept the 
         string type for the dataset for each node. 
*/

// The IntBinaryTree class manages a binary tree of strings.
class IntBinaryTree {
private:
   // TreeNode is a private structure for IntBinaryTree nodes.
   struct TreeNode {
      std::string value;         // The value in the node
      TreeNode *left;    // Pointer to left child node
      TreeNode *right;   // Pointer to right child node
   };

   // root points to the topmost node of the tree.
   TreeNode *root;      

   // Private member functions for internal operations.
   void insert(TreeNode *&, TreeNode *&);
   void destroySubTree(TreeNode *);
   void deleteNode(string, TreeNode *&);
   void makeDeletion(TreeNode *&);
   void displayInOrder(TreeNode *) const;
   void displayPreOrder(TreeNode *) const;
   void displayPostOrder(TreeNode *) const;

public:
   // Constructor initializes the root to nullptr, indicating an empty tree.
   IntBinaryTree()     { root = nullptr; }

   // Destructor deallocates all nodes in the tree.
   ~IntBinaryTree()    { destroySubTree(root); }

   // Public interface for inserting, searching, and removing nodes.
   void insertNode(string);
   bool searchNode(string);
   void remove(string);

   // Public wrappers for tree traversal functions.
   void displayInOrder() const     {  displayInOrder(root); }
   void displayPreOrder() const    {  displayPreOrder(root); }
   void displayPostOrder() const   {  displayPostOrder(root); }
};

#endif // INTBINARYTREE_H
