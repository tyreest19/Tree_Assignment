//
//  main.cpp
//  Tree_Assignment
//
//  Created by Tyree Stevenson on 4/28/17.
//  Copyright © 2017 Tyree Stevenson. All rights reserved.
//

#include <iostream>
#include "Node.hpp"

bool Validate_Input(string postorder);

int main()
{
    Binary_Tree tree;
    string user_enter_tree;
    cout << "This is a program that allows the user to enter a preoder form of a tree then constructs it!";
    cout << "\nEnter Tree: ";
    getline(cin, user_enter_tree);
    while (!Validate_Input(user_enter_tree))
    {
        cout << "Please input a valid tree: ";
        getline(cin, user_enter_tree);
    }
    tree.duplicate_root = tree.Create_Tree(user_enter_tree);
    tree.root = tree.duplicate_root;
    cout << "\nPreoder: ";
    tree.Print_Preorder();
    cout << "\nPostorder: ";
    tree.Print_Postorder();
    cout << "\nInorder: ";
    tree.Print_Inorder();
    cout << "\nLevel Order: ";
    tree.Print_Level_Order(tree.root);
    cout << "\n";
    string is_binary_search_tree = tree.IS_BST(tree.root) ? "true": "false";
    cout << "Is this tree a binary search tree: " << is_binary_search_tree << "\n";
    cout << "Graphical Representation of Tree\n";
    tree.Print_Tree(tree.root);
    return 0;
}

bool Validate_Input(string postorder)
{
    int amount_of_dots = 0;
    int amount_of_chars = 0;
    for (int i = 0; i < postorder.length(); i++)
    {
        if (postorder[i] == '.')
        {
            amount_of_dots++;
        }
        
        else
        {
            amount_of_chars++;
        }
    }
    
    return amount_of_dots > amount_of_chars;
}
