//
//  Node.cpp
//  Tree_Assignment
//
//  Created by Tyree Stevenson on 4/29/17.
//  Copyright © 2017 Tyree Stevenson. All rights reserved.
//

#include <stdio.h>
#include "Node.hpp"

Binary_Tree:: Binary_Tree()
{
    root = nullptr;
    index2 = 0;
}

void Binary_Tree:: Caller(Node *node, char data)
{
    if (node == nullptr)
    {
        node = new Node;
        node->data = data;
    }
    
    else
    {
        Node *new_node = new Node;
        new_node->data = data;
        if (!node->Left)
            node->Left = new_node;
        
        else if (!node->Right)
            node->Right = new_node;
        
        else if (!(node->Left->Right && node->Left->Left))
            Caller(node->Right, data);
        
        else if (!(node->Right->Right && node->Right->Left))
            Caller(node->Left, data);
    }
}

void Binary_Tree:: Insert(char data)
{
    if (root == nullptr)
    {
        root = new Node;
        root->data = data;
    }
    
    else
    {
        Caller(root, data);
    }
    
}

void Binary_Tree:: Print_Preorder()
{
    Preorder(root);
}

void Binary_Tree:: Print_Postorder()
{
    Postorder(root);
}

void Binary_Tree:: Postorder(Node *node)
{
    if (node == nullptr)
        cout << ".";
    
    else
    {
        Postorder(node->Left);
        Postorder(node->Right);
        cout << node->data;
    }
}

void Binary_Tree:: Preorder(Node *node)
{
    if (node == nullptr)
        cout << ".";

    else
    {
        cout << node->data;
        Preorder(node->Left);
        Preorder(node->Right);
    }
}
void Binary_Tree:: Print_Inorder()
{
    Inorder(root);
}

void Binary_Tree:: Inorder(Node *node)
{
    if (node == nullptr)
        cout << ".";

    else
    {
        Inorder(node->Left);
        cout << node->data;
        Inorder(node->Right);
    }
}

Binary_Tree:: Node* Binary_Tree:: Create_Tree(string User_Enter_Tree)
{
    if (User_Enter_Tree[index2] == '.' || index2 >= User_Enter_Tree.length())
    {
        index2++;
        return nullptr;
    }
    
    else
    {
        Node* new_node = new Node;
        new_node->data = User_Enter_Tree[index2++];
        new_node->Left = Create_Tree(User_Enter_Tree);
        new_node->Right = Create_Tree(User_Enter_Tree);
        return new_node;
    }
    return nullptr;
}



