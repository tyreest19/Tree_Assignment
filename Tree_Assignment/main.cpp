//
//  main.cpp
//  Tree_Assignment
//
//  Created by Tyree Stevenson on 4/28/17.
//  Copyright © 2017 Tyree Stevenson. All rights reserved.
//

#include <iostream>
#include "Node.hpp"

int main()
{
    Binary_Tree tree;
//    string user_enter_tree;
//    cout << "This is a program that allows the user to enter a preoder form of a tree then constructs it!";
//    cout << "\nEnter Tree: ";
//    getline(cin, user_enter_tree);
    tree.duplicate_root = tree.Create_Tree("621..43...8..");
    tree.root = tree.duplicate_root;
    cout << "\nPreoder: ";
    tree.Print_Preorder();
    cout << "\nPostorder: ";
    tree.Print_Postorder();
    cout << "\nInorder: ";
    tree.Print_Inorder();
    cout << "\n";
    string is_binary_search_tree = tree.IS_BST(tree.root) ? "true": "false";
    cout << "Is this tree a binary search tree: " << is_binary_search_tree << "\n";
    return 0;
}
