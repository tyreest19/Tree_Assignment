//
//  Binary_Tree.hpp
//  Tree_Assignment
//
//  Created by Tyree Stevenson on 4/28/17.
//  Copyright © 2017 Tyree Stevenson. All rights reserved.
//

#ifndef Binary_Tree_hpp
#define Binary_Tree_hpp

#include <stdio.h>
#include <iostream>

using namespace std;

class Binary_Tree
{

public:
    
    struct Node
    {
        char data = NULL;
        Node *Right = nullptr;
        Node *Left = nullptr;
    };
    
    Binary_Tree();
    void Print_Preorder();
    void Print_Postorder();
    void Print_Inorder();
    bool IS_BST(Node* node);
    void Print_Tree(Node *node);
    Node *Create_Tree(string User_Enter_Tree);
    Node* root;
    Node* duplicate_root;
    int index;
    
private:
    
    void Preorder(Node *node);
    void Postorder(Node *node);
    void Inorder(Node *node);
};

#endif /* Binary_Tree_hpp */
