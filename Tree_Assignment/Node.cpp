//
//  Node.cpp
//  Tree_Assignment
//
//  Created by Tyree Stevenson on 4/29/17.
//  Copyright © 2017 Tyree Stevenson. All rights reserved.
//

#include <stdio.h>
#include "Node.hpp"

//=========================================================================================
// Construct Binary Tree
//=========================================================================================

Binary_Tree:: Binary_Tree()
{
    root = nullptr;
    height = 0;
    index = 0;
}

//=========================================================================================
// Print binary tree in preorder
//=========================================================================================

void Binary_Tree:: Print_Preorder()
{
    Preorder(root);
}

//=========================================================================================
// Print binary tree in postorder
//=========================================================================================

void Binary_Tree:: Print_Postorder()
{
    Postorder(root);
}

//=========================================================================================
// Print binary tree in inorder
//=========================================================================================

void Binary_Tree:: Print_Inorder()
{
    Inorder(root);
}

//=========================================================================================
// Returns true or false whether tree is a Binary Search Tree or Not
//=========================================================================================

bool Binary_Tree:: IS_BST(Node* node)
{
    
    if (node && node->Left)
    {
        if (node->data < node->Left->data)
        {
            return false;
        }
        
        IS_BST(node->Left);
        IS_BST(node->Left->Left);
    }
    
    if (node && node->Right)
    {
        if (node->data > node->Right->data)
        {
            return false;
        }
        
        IS_BST(node->Right);
        IS_BST(node->Right->Right);
    }
    
    return true;
}

//=========================================================================================
// Prints binary tree vertically with arcs
//=========================================================================================

void Binary_Tree:: Print_Tree(Node *node)
{
    bool printed_root = false;
    
    if (node == root && !printed_root)
    {
        cout << node->data;
        cout << "\n";
        string intial_root = "\/  \\";
        cout << intial_root;
        printed_root = true;
    }
    
    cout << "\n";
    
    if (node->Left)
    {
        cout << " / ";
        cout << "\n" << node->Left->data;
        Print_Tree(node->Left);
    }
    
    if (node->Right)
    {
        cout << " \ ";
        cout << "\n" << node->Right->data;
        Print_Tree(node->Right);
    }
    
}

//=========================================================================================
// Creates a binary tree by passing in postoder
//=========================================================================================

Binary_Tree:: Node* Binary_Tree:: Create_Tree(string User_Enter_Tree)
{
    if (User_Enter_Tree[index] == '.' || index >= User_Enter_Tree.length())
    {
        index++;
        return nullptr;
    }
    
    else
    {
        Node* new_node = new Node;
        new_node->data = User_Enter_Tree[index++];
        new_node->Left = Create_Tree(User_Enter_Tree);
        new_node->Right = Create_Tree(User_Enter_Tree);
        return new_node;
    }
    return nullptr;
}

//=========================================================================================
// Get height of tree
//=========================================================================================

int Binary_Tree:: Get_Height(Node *node)
{
    if (!node)
    {
        return 0;
    }
    
    else
    {
        int left_height = Get_Height(node->Left);
        int right_height = Get_Height(node->Right);
        return right_height > left_height ? right_height + 1 : left_height + 1;
    }
}

//=========================================================================================
// Prints node on a patricular level
//=========================================================================================

void Binary_Tree:: Print_Level(Node* node, int level)
{
    if (!node)
        return;
    
    if (level == 1)
        cout << node->data;
    
    else if (level > 1)
    {
        Print_Level(node->Left, level-1);
        Print_Level(node->Right, level-1);
    }
}

//=========================================================================================
// Prints level order
//=========================================================================================

void Binary_Tree:: Print_Level_Order(Node* node)
{
    int height = Get_Height(node);
    for (int i= 1; i <= height; i++)
    {
        Print_Level(node, i);
    }
}

//=========================================================================================
// Assist Print_Preorder function
//=========================================================================================

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

//=========================================================================================
// Assist Print_Postorder function
//=========================================================================================

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

//=========================================================================================
// Assist Inorder function
//=========================================================================================

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

//void Binary_Tree:: Level_Order(Node *node)
//{
//    if (node == nullptr)
//    {
//        count << ".";
//    }
//}
//

