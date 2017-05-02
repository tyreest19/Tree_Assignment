//
//  Utils.cpp
//  Tree_Assignment
//
//  Created by Tyree Stevenson on 4/28/17.
//  Copyright © 2017 Tyree Stevenson. All rights reserved.
//

#include "Utils.hpp"
#include "Node.hpp"

//void Print_Preorder(Node *node)
//{
//    if (node == nullptr)
//        cout << ".";
//    
//    else
//    {
//        cout << node->data;
//        Print_Preorder(node->Left);
//        Print_Preorder(node->Right);
//    }
//}
//
//void Print_Inorder(Node *node)
//{
//    if (node == nullptr)
//        cout << ".";
//    
//    else
//    {
//        Print_Inorder(node->Left);
//        cout << node->data;
//        Print_Inorder(node->Right);
//    }
//}
//
//void Print_Postorder(Node *node)
//{
//    if (node == nullptr)
//        cout << ".";
//    
//    else
//    {
//        Print_Postorder(node->Left);
//        Print_Postorder(node->Right);
//        cout << node->data;
//    }
//}
//
//void Insert(Node *node, char data)
//{
//    Node *new_node = new Node;
//    new_node->data = data;
//    
//    if (node == nullptr)
//    {
//        node = new_node;
//    }
//    
//    else
//    {
//        if (!node->Left)
//            node->Left = new_node;
//        
//        else if (!node->Right)
//            node->Right = new_node;
//        
//        else if (!(node->Left->Right && node->Left->Left))
//            Insert(node->Right, data);
//        
//        else if (!(node->Right->Right && node->Right->Left))
//            Insert(node->Left, data);
//    }
//}
//
//bool Is_In(Binary_Tree T, char data)
//{
//    if(helper(T.root->Left) == data || helper(T.root->Right) == data)
//        return true;
//    return false;
//}

//char helper(Node *node)
//{
//    if (node)
//    {
//        return node->data;
//    }
//    
//    return '~';
//}
