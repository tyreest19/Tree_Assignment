//
//  Utils.cpp
//  Tree_Assignment
//
//  Created by Tyree Stevenson on 4/28/17.
//  Copyright © 2017 Tyree Stevenson. All rights reserved.
//

#include "Utils.hpp"
#include "Binary_Tree.hpp"

void Print_Preorder(Node *node)
{
    
    if (node == NULL)
        cout << ".";
    
    else
    {
        cout << node->data;
        Print_Preorder(node->Left);
        Print_Preorder(node->Right);
    }
}

void Print_Inorder(Node *node)
{
    if (node == NULL)
        cout << ".";
    
    else
    {
        Print_Inorder(node->Left);
        cout << node->data;
        Print_Inorder(node->Right);
    }
}

void Print_Postorder(Node *node)
{
    if (node == NULL)
        cout << ".";
    
    else
    {
        Print_Inorder(node->Left);
        Print_Inorder(node->Right);
        cout << node->data;
    }
}
