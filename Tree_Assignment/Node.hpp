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
    void Insert(char data);
    void Print_Preorder();
    void Print_Postorder();
    void Print_Inorder();
    void insert_Tree(string);
    Node *Create_Tree(string User_Enter_Tree);
    Node *Help_Build_Tree(string User_Enter_Tree, int &index);
    Node* root;
    Node* duplicate_root;
    int index2;
    
private:
    
    void Caller(Node *node, char data);
    void Preorder(Node *node);
    void Postorder(Node *node);
    void Inorder(Node *node);
    Node *Insert_Tree_Helper(Node *node, char data, int index);
};

#endif /* Binary_Tree_hpp */
