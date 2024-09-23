#pragma once
#include "create_traversal.cpp"

Node* findMax(Node* node) {
    if (node == NULL) {
        return node;
    }
    while (node->right != NULL) {
        node = node->right;
    }
    return node;
}
Node* findMin(Node* node) {
    if (node->left != NULL) {
        return findMin(node->left);
    }
    return node;
}
Node* findMax2th(Node* node) {
    if (node == NULL || (node->left == NULL && node->right == NULL)) {
        return node;
    }
    Node* temp = NULL;
    while (node->right != NULL) {
        temp = node;
        node = node->right;
    }
    if (node->left != NULL) {
        node = node->left;
        while (node->right != NULL) {
            node = node->right;
        }
        return node;
    }
    return temp;
}
Node* findMin2th(Node* node) {
    if (node == NULL || (node->left == NULL && node->right == NULL)) {
        return node;
    }
    Node* temp = NULL;
    while (node->left != NULL) {
        temp = node;
        node = node->left;
    }
    if (node->right != NULL) {
        node = node->right;
        while (node->left != NULL) {
            node = node->left;
        }
        return node;
    }
    return temp;
}
Node* find_K(Node* node, int k) {
    if (node == NULL || node->key == k) {
        return node;
    }
    if (node->key > k) {
        return find_K(node->left, k);
    }
    return find_K(node->right, k);
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
//     Node* max = findMax(node);
//     Node* min = findMin(node);
//     cout << "\nMin: " << min->key <<" ";
//     cout << "Max: " << max->key <<endl;
//     Node* max2th = findMax2th(node);
//     Node* min2th = findMin2th(node);
//     cout << "Max2th: " << max2th->key <<" ";
//     cout << "Min2th: " << min2th->key <<" \n";
//     int k = 5;
//     Node* findk = find_K(node, k);
//     if (!findk) {
//         cout << "not found";
//     }
//     else {
//         cout << findk->key << " in bst";
//     }
// }