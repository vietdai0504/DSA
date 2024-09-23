#pragma once
#include <iostream>
using namespace std;
struct Node{
    int key;
    Node* left, *right;
};
Node* newNode(int key) {
    Node* temp = new Node;
    temp->key = key;
    temp->left = temp->right = NULL;
    return temp;
}
Node* insertNode(Node* node, int key) {
    if (node == NULL) {
        return newNode(key);
    }
    if (node->key > key) {
        node->left = insertNode(node->left, key);
    }
    if (node->key < key) {
        node->right = insertNode(node->right, key);
    }
    return node;
}
void inorder(Node* node) {
    if (node != NULL) {
        inorder(node->left);
        cout << node->key <<" ";
        inorder(node->right);
    }
}
void preorder(Node* node) {
    if (node != NULL) {
        cout << node->key <<" ";
        preorder(node->left);
        preorder(node->right);
    }
}
void postorder(Node* node) {
    if (node != NULL) {
        postorder(node->left);
        postorder(node->right);
        cout << node->key <<" ";
    }
}
// int main() {
//     int A[10] = {8,3,5,6,9,10,44,2,7,20};
//     int n = sizeof(A)/sizeof(A[0]);
//     Node* node = NULL;
//     for (int i=0;i<n;i++) {
//         node = insertNode(node, A[i]);
//     }
//     cout << "Inorder: ";
//     inorder(node);
//     cout << "\nPreorder: ";
//     preorder(node);
//     cout << "\nPostorder: ";
//     postorder(node);
// }